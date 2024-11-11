#include <iostream>

using namespace std;

int main()
{

    enum DAMAGE_LEVEL
    {
        LOW,
        MEDIUM,
        HIGH
    };

    int damage;
    cout << "Damage received : ";
    cin >> damage;

    //static_cast enum to int transformation 
    DAMAGE_LEVEL damageLevel = static_cast<DAMAGE_LEVEL>(damage);

    switch (damageLevel){
        case LOW:
            cout << "Damage is low.";
            break;

        case MEDIUM:
            cout << "DAmage is medium!!";
            break;

        case HIGH:
            cout << "CRITICAL DAMAGE";
            break;

        default:
            break;
    }

    return 0;
}