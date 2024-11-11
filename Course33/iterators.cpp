#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> cars = {"BMW","Opel","Renault"};

    vector<string>::iterator it;

    for (it = cars.begin() ; it != cars.end() ; ++it){
        cout << *it <<endl;
    }
    
    it = cars.end() -1;
    cout << "Iteration last element: " << *it << endl;

    it = cars.begin();
    cout << "Iteration first element: " << *it << endl;
    
    return 0;
}