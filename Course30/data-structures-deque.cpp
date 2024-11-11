#include <iostream>
#include <deque>

using namespace std;

int main(){

    /*
        Bir deque ( double-ended kuyruk) ancak, elemanlar eklenip çıkarılabileceğinden daha esnektir her iki uçtan (önden ve arkadan). Ayrıca öğelere dizin numaraları.
    */

    deque<string> languages = {"English", "Turkish","Deutsh"};

    int i = 1;
    for(string language : languages){
        cout << i << ". element : " << language << endl;
        i++;
    }

    cout << "Deque first element: " << languages.front() << endl;
    cout << "Deque anything element: " << languages[1] << endl;

    /*
        Methods such as at push, pop, size, empty used in vectors can also be used in deque.
    */

    return 0;
}