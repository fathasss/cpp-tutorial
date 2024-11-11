#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int array[7] = {3, 5, 7, 2, 8, 7, 6};
    
    int tempFirst = 0;
    int tempSecond = 0;

    for (int i = 0; i< 7; i++){
        if (array[i] > tempFirst){
            tempSecond = tempFirst;
            tempFirst = array[i];           
        }
        else if (array[i] > tempSecond && array[i] != tempFirst){
            tempSecond = array[i];
        } 
    }

    cout << "Max first value: " << tempFirst << "\n";
    cout << "Max second value : " << tempSecond;
    return 0;
}