#include <iostream>

using namespace std;

class Person{
    public:
        string identity_number;
        string first_name;
        string sur_name;
};

int main(){

    Person human;

    human.identity_number = "11122233344";
    human.first_name = "John";
    human.sur_name = "Doe";

    cout << "Identity Number: " << human.identity_number << endl;
    cout << "Firstname : " << human.first_name << endl;
    cout << "Surname : " << human.sur_name << endl;
    return 0;
}