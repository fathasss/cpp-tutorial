#include <iostream>

using namespace std;

int main()
{

    // Single struct
    struct
    {
        string IdentityNumber;
        string Name;
        string Surname;
    } person;

    person.IdentityNumber = "11122233344";
    person.Name = "John";
    person.Surname = "Doe";

    cout << "Identity number: " << person.IdentityNumber << endl;
    cout << "Firstname : " << person.Name << endl;
    cout << "Surname : " << person.Surname << endl;
    
    // Multiple struct
    struct
    {
        string IdentityNumber;
        string Firstname;
        string LastName;
    } person1, person2, person3;

    person1.IdentityNumber = "1231242312";
    person1.Firstname = "John";
    person1.LastName = "Doe";

    person2.IdentityNumber = "23125421351";
    person2.Firstname = "John";
    person2.LastName = "Doe";

    cout << "Identity number: " << person1.IdentityNumber << endl;
    cout << "Firstname : " << person1.Firstname << endl;
    cout << "Surname : " << person1.LastName << endl;

    cout << "Identity number: " << person2.IdentityNumber << endl;
    cout << "Firstname : " << person2.Firstname << endl;
    cout << "Surname : " << person2.LastName << endl;
}