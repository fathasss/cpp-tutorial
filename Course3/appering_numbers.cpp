#include <iostream>
using namespace std;

int main() {
    int size;
    int result = 0;

    cout << "Array size: ";
    cin >> size;

    int* array = new int[size]; //dynamic array create.

    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". value: "; 
        cin >> array[i];
    }

    for (int k = 0; k < size; k++) {
        result ^= array[k];
    }

    cout << "Number appearing once: " << result << endl;

    delete[] array;

    return 0;
}
