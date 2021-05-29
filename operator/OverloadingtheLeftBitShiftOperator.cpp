#include <iostream>
#include <string>

class Test
{
    int id;
    std::string name;

public:
    Test() : id(0), name("")
    {
    }

    Test(int id, std::string name) : id(id), name(name)
    {
    }

    Test(const Test &other)
    {
        this->id = other.id;
        this->name = other.name;
    }

    const Test &operator=(const Test &other)
    {
        this->id = other.id;
        this->name = other.name;
        return *this;
    }

    std::ostream& operator<<(std::ostream &os, const Test &object)
    {   
        os << object.id << ": " << object.name;
		return os;
    }   
};

int main()
{

    Test test1(10, "Mike");
    std::cout << test1 << std::endl;

}