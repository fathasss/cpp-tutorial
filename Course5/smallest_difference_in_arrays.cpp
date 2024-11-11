#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cout << "Array Size: ";
    cin >> size;
    cout << endl;

    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". value :";
        cin >> array[i];
    }

    // arrangement ascending:
    sort(array, array + size);
    // arrangemnt descending -> sort(array,array+size,greater<int>())

    /*
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    */

    int minDifference = INT_MAX;

    for (int k = 0; k < size; k++)
    {
        int diff = array[k] - array[k - 1];

        if (diff < minDifference)
        {
            minDifference = diff;
        }
    }

    cout << "Smallest diffence : " << minDifference << endl;

    delete[] array;

    return 0;
}