#include <iostream>

using namespace std;

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "Tuut tuut!" << endl;
        }
};

class EnginePower{
    public:
        int power;
};

class Car: public Vehicle,public EnginePower{
    public:
        string model = "Mustang";
};


class Tractor: public Car{
    public:
        int tork;
};

int main(){
    //Inheritance
    Car mycar;
    mycar.honk();
    cout << "Brand: " << mycar.brand << " Model : " << mycar.model <<endl;

    //Multilevel Inheritance
    Tractor track;
    track.tork = 5000;
    cout << "Brand: " << track.brand << " Model: " << track.model << " Tork : " << track.tork << endl; 

    //Multiple Inheritance
    mycar.power = 100;
    cout << "Brand : " << mycar.brand << " Model: "<<mycar.model << " Engine Power : " << mycar.power <<endl;
    
    return 0;
}