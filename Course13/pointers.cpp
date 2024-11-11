#include <iostream>

using namespace std;

int main()
{

    string food = "Pizza";
    cout << "Food parameter is memory address : " << &food << endl;

    // A pointer, however, stores the memory address as its value.
    string *ptr = &food;
    cout << ptr << endl;
    cout << "Parameter value : " << *ptr << endl;

    *ptr = "Hamburger";
    cout << *ptr << endl;
    cout << food << endl;

    return 0;
}