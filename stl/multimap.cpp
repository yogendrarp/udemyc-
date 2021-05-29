#include <iostream>
#include <map>

int main()
{
    std::multimap<int, std::string> lookup;
    lookup.insert(std::make_pair(30, "Arjun"));
    lookup.insert(std::make_pair(30, "Gopal"));
    lookup.insert(std::make_pair(40, "Parag"));
    lookup.insert(std::make_pair(10, "Rakesh"));
    lookup.insert(std::make_pair(10, "Rajesh"));

    for (std::multimap<int, std::string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    std::cout << std::endl;

    for (std::multimap<int, std::string>::iterator it = lookup.find(30); it != lookup.end(); it++)
    {
        std::cout << it->first << " : " << it->second << std::endl;
    }
    std::cout << std::endl;
    std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(30);

    for (std::multimap<int, std::string>::iterator it = its.first; it != its.second; it++)
    {
        std::cout << it->first << " : " << it->second << std::endl;
    }
}