#include <iostream>
#include <list>

int main()
{
    std::list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_front(0);

    std::list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    std::cout << "element : " << *it << std::endl;

    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    

    std::list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt = numbers.erase(eraseIt);
    std::cout << "Element: " << *eraseIt << std::endl;

    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}