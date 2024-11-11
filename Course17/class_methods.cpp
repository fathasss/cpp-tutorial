#include <iostream>

using namespace std;

class Person{
    public:
        string first_name;
        string last_name;

        void outMethod();
        void inMethod(){
            cout << "Hello class in method!" << endl;
        }
};

void Person::outMethod(){
    cout  << "Hello class out method! " << endl;
}

int main() {
    Person human;

    human.inMethod();
    human.outMethod(); 

    return 0;
}