#include <iostream>
#include <thread>

void func1()
{
    std::cout << "Hello from function \n";
}

class my_class
{
public:
    void operator()()
    {
        std::cout << "hello from the class with function call operator \n";
    }
};

int main()
{
    std::thread t1(func1);

    my_class class1;
    std::thread t2(class1);

    std::thread t3([] {
        std::cout<<"hello form lambada\n";
    });

        t1.join();
        t2.join();
        t3.join();
}