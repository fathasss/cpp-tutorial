#include <iostream>
#include <set>

using namespace std;

int main(){

    /*
        Are sorted automatically in ascending order.
        Are unique, meaning equal or duplicate values are ignored.
        Can be added or removed, but the value of an existing element cannot be changed.
        Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
    */

    set<int> numbers = {9,4,1,3,5};

    int i = 1;
    for(int number : numbers){
        cout << i <<". element: " << number << endl;
        i++;
    }

    int k = 1;
    set<int, greater<int>> number2 = {2,4,1,7,3,5,9}; //DESC, less<int> = ASC
    for (int number : number2){
        cout << k <<". element: " << number << endl;
        k++;
    }
    
    int j = 1;
    numbers.insert(6);
        for(int number : numbers){
        cout << j <<". element: " << number << endl;
        j++;
    }

    numbers.erase(6); //erase(value);

    
    return 0;
}