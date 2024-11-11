#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> example = {"000", "001", "011"};
    example.push_back("111");

    int vectorsize = example.size();
    string array_example[vectorsize];

    int i = 0;
    for (string x : example){
        cout << x << endl;
        array_example[i] = x;
        i++;
    }

    cout << "Vector sizeof: " << sizeof(example) << endl;
    cout << "Vector lenght: " << example.size() << endl;

    cout << "Array size: " << sizeof(array_example) << endl;
    cout << "Array index size: " << sizeof(array_example[0]) << endl;
    cout << "Array lenght: " << sizeof(array_example) / sizeof(array_example[0]) << endl;

    return 0;
}