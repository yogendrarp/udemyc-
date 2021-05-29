#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    std::cout << "For loop" << std::endl;

    for (int i = 0; i < strings.size(); i++)
    {
        std::cout << strings[i] << "\n";
    }

    std::cout << "\n";
    std::cout << "Iterator" << std::endl;

    for (auto it = strings.begin(); it != strings.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "\n";

    std::vector<std::string>::iterator it = strings.begin();

    it += 2;

	std::cout << *it << std::endl;
}