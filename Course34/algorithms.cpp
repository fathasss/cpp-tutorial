#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<string> cars = {"Volvo", "Opel", "BMW", "Volkswagen", "Ford"};

    sort(cars.begin(), cars.end());

    int i = 1;
    for (string car : cars)
    {
        cout << i << ". element: " << car << endl;
        i++;
    }

    sort(cars.rbegin(), cars.rend());

    i = 1;
    for (string car : cars)
    {
        cout << i << ". element: " << car << endl;
        i++;
    }

    auto it = find(cars.begin(),cars.end(),"Volvo");
    cout << "Iteration search : " << *it << endl;


    vector<string> copies(5);
    copy(cars.begin(),cars.end(),copies.begin());

    i = 1;
    for (string car : copies)
    {
        cout << i << ". copies element: " << car << endl;
        i++;
    }
    
    return 0;
}