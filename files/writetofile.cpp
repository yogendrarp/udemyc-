#include <iostream>
#include <fstream>

int main()
{
    std::fstream out_file;
    std::string out_file_name = "file.txt";
    out_file.open(out_file_name, std::ios::out);
    if (out_file.is_open())
    {
        out_file << "Hello" << std::endl;
        out_file << 1234 << std::endl;
        out_file.close();
    }
    else
    {
        std::cout << "Error opening the file" << std::endl;
    }
}