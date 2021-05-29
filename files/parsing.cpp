#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
    std::string in_file_path = "population.txt";
    std::ifstream in_file;

    in_file.open(in_file_path);

    if (!in_file.is_open())
    {
        return 1;
    }

    while (in_file)
    {
        std::string line;
        getline(in_file, line, ':');
        int population;
        in_file >> population;

        in_file.get();
        if (!in_file)
        {
            continue;
        }

        std::cout << "'" << line << "'"
                  << " -- '" << population << "'" << std::endl;
    }

    in_file.close();
}