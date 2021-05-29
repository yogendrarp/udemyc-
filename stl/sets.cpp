#include <iostream>
#include <set>

using namespace std;

int main()
{
    std::set<int> numbers;

    numbers.insert(10);
    numbers.insert(10);
    numbers.insert(4);
    numbers.insert(80);
    numbers.insert(40);
    numbers.insert(20);

    for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::set<int>::iterator itFind = numbers.find(30);

    if (itFind != numbers.end())
    {
        std::cout << "30 Found" << std::endl;
    } else{
        std::cout << "30 Not Found" << std::endl;
    }

    if (numbers.count(40))
    {
        std::cout << "40 Found" << std::endl;
    }


}
