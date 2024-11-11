#include <iostream>

using namespace std;

int main(){

    int age;
    cout << "Enter your age: " ;
    cin >> age;

    cout << endl;

     try{
        if (age >= 18 && age <= 60){
            cout << "You can vote !!!";
        }
        else{
            throw(age);
        }
        
     }
     catch(int num){
        cout << "I am sorry. You cant vote. Ideal age range is 18-60 " <<endl;
        cout << "Age is : " << num <<endl;
     }
    return 0;
}