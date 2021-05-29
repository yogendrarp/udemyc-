#include <iostream>
#include <fstream>

int main()
{

    std::string in_file_path = "file.txt";
    std::ifstream in_file;

    in_file.open(in_file_path);
    if (in_file.is_open())
    {
        std::string line;
        while (!in_file.eof())
        {
            getline(in_file, line);
            std::cout << line << std::endl;
        }
    }
    else
    {
        in_file.close();
    }
}