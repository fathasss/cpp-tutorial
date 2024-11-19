#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

#define PRODUCT_KEY "123"

void access_granted(HWND rootWindow){
    MessageBox(rootWindow , "Application Activated." , "Success" , MB_OK | MB_ICONINFORMATION);
}

int main(){

    //I tried to enable the application with x64dbg.

    HWND rootWindow = GetConsoleWindow();

    cout << "Product Key: ";
    char userInput[32];
    cin >> userInput;

    if (strcmp(userInput, PRODUCT_KEY) == 0)
    {
        access_granted(rootWindow);
    }
    else{
        MessageBox(rootWindow,"Invalid Product Key.", "Failed", MB_ICONERROR);
    }
    
    return 0;
}