#include <iostream>

using namespace std;

int main()
{

    int day;

    cout << "Select the numerical value of the day: ";
    cin >> day ;
    cout << endl;

//Switch - case conditions:
    switch (day){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        break;
    }

    cout << endl;

//If-else conditions:
    if (20 > 10){
        cout << true << endl;
    }
    else{
        cout << false;
    }
    

    return 0;
}