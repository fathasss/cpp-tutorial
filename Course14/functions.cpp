#include <iostream>

using namespace std;

// Function declaration
void myFunction();

void mySecondFunction(string name)
{
    cout << "My name is : " << name << endl;
}

void myThirdFunctionDefaultParam(string country = "England")
{
    cout << country << endl;
}

string function(string username){
    return username + " " + "Doe";
}

int main()
{
    myFunction();
    mySecondFunction("Windows");

    myThirdFunctionDefaultParam();
    myThirdFunctionDefaultParam("USA");
    cout << function("John") << endl;
    return 0;
}

void myFunction()
{
    cout << "Hello function!" << endl;
}