#include <iostream>
#include <set>

class Test
{
    int id;
    std::string name;

public:
    Test(int id, std::string name) : id(id), name(name) {}

    void print()
    {
        std::cout << id << " : " << name << std::endl;
    }
};

int main()
{
   
   
}