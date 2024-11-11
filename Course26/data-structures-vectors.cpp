#include <iostream> 
#include <vector> // Include the vector library
#include <list> // Include the list library
#include <set> // Include the set library
#include <map> // Include the map library
#include <stack> // Include the stack library
#include <queue> // Include the queue library

using namespace std;

class Cars{
    public:
        string name;
        int model;
};

int main(){

    Cars car;
    car.model = 2024;
    car.name = "BMW";

    vector<string> carss = {"Volvo","Mazda","Ford","BMW"};

    for (string tempcar : carss){
        cout << tempcar << endl;
    }

    cout << carss.front() << endl; //First element
    cout << carss.back() << endl; //Last element
    cout << carss[1] << endl; //Second element
    cout << carss.at(1) << endl; //Second element
    cout << carss.at(2) << endl; //Third element

    carss[1] = "Volkwagen";
    carss.at(2) = "Tesla";
    cout << "Vector element changes: " <<  carss.at(1) << endl;
    cout << "Vector element changes at methods: " <<  carss.at(2) << endl;

    carss.push_back("Renault");
    cout << "Push method: " << carss.at(4) << endl;

    carss.pop_back();
    cout << "Pop method: " << "Size: " << carss.size() <<  " Last element: " << carss.at(carss.size()-1) << endl;

    if (!carss.empty()){
        cout << "Carss vector is not null" << endl;
    }
    else{
        cout << "Carss vector is null" << endl;
    }
    
    return 0;
}