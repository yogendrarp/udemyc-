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
    Person person1 = {"Jethalal", 43, 12.3};

    std::string file_name = "jethalal.bin";
    std::ofstream outputfile;

    outputfile.open(file_name, std::ios::binary);
    if (outputfile.is_open())
    {
        outputfile.write(reinterpret_cast<char *>(&person1), sizeof(Person));
        outputfile.close();
    }
    else
    {
        std::cout << "Could not read" << std::endl;
    }

    Person someon_else = {};
    std::ifstream input_file;
    input_file.open(file_name, std::ios::binary);

    if (input_file.is_open())
    {

        input_file.read(reinterpret_cast<char *>(&someon_else), sizeof(Person));

        input_file.close();
    }
    else
    {
        std::cout << "Could not read file " + file_name;
    }

    std::cout << someon_else.name << ", " << someon_else.age << ", " << someon_else.salary << std::endl;

    return 0;
}
