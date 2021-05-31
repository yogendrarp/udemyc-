#include <iostream>
#include <mutex>
#include <thread>
#include <string>
#include <chrono>
#include <condition_variable>

bool have_i_arrived = false;
int total_distance = 5;
int distance_covered = 0;
std::condition_variable cv;
std::mutex m;

void keep_moving()
{
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        distance_covered++;
        if (distance_covered == total_distance)
            cv.notify_one();
    }
}

void ask_driver_to_wake_u_up_at_right_time()
{
    std::unique_lock<std::mutex> ul(m);
    cv.wait(ul, []
            { return distance_covered == total_distance });
    std::cout << "finally i am there, distance_coverd = " << distance_covered << std::endl;
    ;
}

int main()
{
    std::thread driver_thread(keep_moving);
    std::thread passener_thread(ask_driver_to_wake_u_up_at_right_time);
    passener_thread.join();
    driver_thread.join();
}