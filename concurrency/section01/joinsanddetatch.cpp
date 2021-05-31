#include <iostream>
#include <thread>
#include <chrono>

void func1()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "hello from func_1 \n";
}

int main()
{
    std::thread thread1(func1);
    //thread1.join();
    thread1.detach();
    std::cout << "hello from main thread \n";
}