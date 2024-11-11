#include <iostream>

using namespace std;

class Cars{
    public:
        string brand;
        int model;
        Cars(){
            cout << "Hello Constructor method! " << endl;
        }
        Cars(string x, int y){
            brand = x;
            model = y;
        }

        //Outside constructor : Cars(string i,int j);
};

//Constructor definition outside the class
/*
    Cars::Cars(string i, int j){
        brand = i;
        model = j;
    }
*/

int main(){
    Cars car;
    Cars car1("Toyota", 2024);
    Cars car2();
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    return 0;
}