#include <iostream>
#include <exception>

class MyException : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return "Something went bad";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};

int main()
{
    Test test;
    try
    {
        test.goesWrong();
    }
    catch (MyException &e)
    {
        std::cout << e.what() << std::endl;
    }
}
