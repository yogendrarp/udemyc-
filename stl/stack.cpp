
#include <iostream>
#include <string>
#include <stack>

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
    std::stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));

    std::cout << std::endl;

    // Test &test1 = testStack.top();
    // test1.print();
    // testStack.pop();

    // Test &test2 = testStack.top();
    // test2.print();

    while (testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }
}