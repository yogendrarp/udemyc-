#include <iostream>
#include <string>
using namespace std;

template <class T, class K>
class Test
{
private:
    T obj1;
    K obj2;

public:
    Test(T obj, K m_id)
    {
        this->obj1 = obj;
        this->obj2 = m_id;
    }
    void print()
    {
        cout << obj1 << ": " << obj2 << endl;
    }
};

int main()
{
    Test<string, int> test("Raj", 11);
    test.print();

    Test<string, double> test2("Hello again", 4.0);
	test2.print();
}
