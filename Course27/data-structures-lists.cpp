#include <iostream>
#include <list> // // Include the list library

using namespace std;

int main(){

    // Note: The type of the list (in our string example) cannot be changed once declared.

    list<string> cars = {"Volkswagen", "BMW", "Audi", "Opel"};

    for (string car : cars)
    {
        cout << car << endl;
    }
    
    /*
        Vektörler genellikle sonunda eklemek ve kaldırmak için optimize edilmiştir.
        Vektörlerin aksine, bir liste rastgele erişimi desteklemez, yani yapamazsınız doğrudan belirli bir dizine atlayın veya dizin numaralarına göre öğelere erişme.
    */

    cout << cars.front() << endl; //List first element
    cout << cars.back() << endl; //List last element


    cars.front() = "Toyota";
    cout << "List first element change:" << cars.front() << endl;

    cars.back() = "Renault";
    cout << "List last element change: " << cars.back() << endl;

    cars.push_front("Tesla");
    cout << "List first element add : " << cars.front() << endl;

    cars.push_back("Hyundai");
    cout << "List last element add : " << cars.back() << endl;

    cars.pop_front();
    cout << "List first element delete: " << cars.front() << endl;

    cars.pop_back();
    cout << "List last element delete: " << cars.back() << endl;


    int listsize = cars.size();
    cout << "List size : " << listsize << endl;

    if (!cars.empty()){
        cout << "List is not null" << endl;
    }
    else{
        cout << "List is null" << endl;
    }
    
    return 0;
}