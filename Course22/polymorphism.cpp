#include <iostream>

using namespace std;

class Animals{
    public:
        void sound(){
            cout << "The animal sound : wee wee " <<endl;
        }
};

class Cat : public Animals {
    public:
        void sound(){
            cout << "The cat sound : miyav miyav" << endl;
        }
};

class Dog : public Animals{
    public : 
        void sound(){
            cout << "The dog sound : hav hav " <<endl;
        }
};

int main(){

    Animals animal;
    Dog dog;
    Cat cat;

    animal.sound();
    dog.sound();
    cat.sound();

    return 0;
}