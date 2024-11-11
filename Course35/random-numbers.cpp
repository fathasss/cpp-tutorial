#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << rand() << endl;
    int random = rand() % 10;
    cout << random << endl;

    srand(time(0));
    cout << "Srand Method: " << rand()%101 << endl;

    return 0;
}