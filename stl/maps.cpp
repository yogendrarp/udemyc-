#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    std::map<string, int> ages;
    ages["Mike"] = 20;
    ages["Sue"] = 10;
    ages["Lisa"] = 80;

    ages.insert(std::make_pair("Peter", 100));
    std::cout << ages["Raj"] << std::endl; // adds if not found
    if (ages.find("Vicky") != ages.end())
    {
        std::cout << "Vicky Found" << std::endl;
    }
    else
    {
        std::cout << "Not Found" << std::endl;
    }

    for (std::map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        std::cout << it->first << "," << it->second << std::endl;
    }

    std::cout<<std::endl;
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

}