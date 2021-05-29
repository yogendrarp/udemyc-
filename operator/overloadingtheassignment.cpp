#include <iostream>
#include <string>

class Test
{
    int id;
    std::string name;

public:
    Test() : id(0), name("") {}

    Test(int id, std::string name) : id(id), name(name)
    {
    }

    Test(const Test &other)
    {
        std::cout << "Copy constructor running" << std::endl;
        this->id = other.id;
        this->name = other.name;
    }

    const Test &operator=(const Test &other)
    {
        std::cout << "Assignement running" << std::endl;
        this->id = other.id;
        this->name = other.name;
        return *this;
    }

    void print() const
    {
        std::cout << id << ": " << name << std::endl;
    }
};

int main()
{
    Test test1(10, "Mike");
    std::cout << "Print test1: " << std::flush;
    test1.print();

    Test test2(20, "Bob");

    test2 = test1;
    std::cout << "Print test2: " << std::flush;
    test2.print();

    Test test3;
    test3 = test2;
    std::cout << "Print test3: " << std::flush;
    test3.print();

    std::cout << std::endl;

    Test test4 = test1; // copy runs instead of assignment
    test4.print();
    return 0;
}