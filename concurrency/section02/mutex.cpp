#include <iostream>
#include <mutex>
#include <list>
#include <thread>

std::list<int> my_list;
std::mutex m;

void add_to_list_1(int const &x)
{
    m.lock();
    my_list.push_front(x);
    m.unlock();
}

void size_1()
{
    m.lock();
    int size = my_list.size();
    m.unlock();
    std::cout << "size of the list is : " << size << std::endl;
}

void add_to_list_2(int const &x)
{
    std::lock_guard<std::mutex> lg(m);
    my_list.push_back(x);
}

void size2()
{
    std::lock_guard<std::mutex> lg(m);
    int size = my_list.size();
    std::cout << "size of the list is : " << size << std::endl;
}

int main()
{
    std::thread thread_1(add_to_list_1, 4);
    std::thread thread_2(add_to_list_2, 11);

    thread_1.join();
    thread_2.join();
}