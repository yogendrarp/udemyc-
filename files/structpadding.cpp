#include <iostream>
#include <fstream>

#pragma pack(push, 1)
struct Person
{
    char name[50];
    int age;
    double salary;
};

#pragma pack(pop)

int main()
{
    std::cout << sizeof(Person) << std::endl;
}
