#include <iostream>
#include <map>

#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(std::string name, int age) : name(name), age(age) {}

    Person(const Person &other)
    {
        std::cout << "Copy Constructor called" << std::endl;
        name = other.name;
        age = other.age;
    }
    void print()
    {
        std::cout << name << ": " << age << std::endl;
    }
};

int main()
{
    std::map<int, Person> people;
    people[50] = Person("Mike", 40);
    people[30] = Person("Subra", 10);
    people[10] = Person("Trojan", 11);

    people.insert(std::make_pair(55, Person("Bob", 45)));
    people.insert(std::make_pair(55, Person("Sue", 24)));

    for (std::map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {
        std::cout << it->first << ": " << std::flush;
        it->second.print();
    }
}