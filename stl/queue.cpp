
#include <iostream>
#include <string>
#include <queue>

class Test
{
    std::string name;

public:
    explicit Test(std::string name) : name(name)
    {
    }
    ~Test()
    {
    }

    void print() const
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    std::queue<Test> test_queue;

    test_queue.push(Test("Mike"));
    test_queue.push(Test("John"));
    test_queue.push(Test("Sue"));

    test_queue.back().print();

    while (test_queue.size() > 0)
    {
        Test &test = test_queue.front();
        test.print();
        test_queue.pop();
    }

    std::cout << std::endl;
}