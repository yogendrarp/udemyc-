#include<iostream>

using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}

int main()
{
    test(7);

    void (*pTest)(int) = test;
    pTest(8);
}