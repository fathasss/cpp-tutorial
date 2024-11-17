#include <windows.h>
#include <iostream>

using namespace std;

DWORD WINAPI threadFunc(LPVOID lpParam){
    cout << "Thread is running!";
    return 0;
}

int main(int argc, char **argv){
    PCSTR path_to_dll = argv[1];
    HINSTANCE hDll = LoadLibraryA(argv[1]);
    if(hDll == NULL){
        cout << "Failed to loaded DLL!" << endl;
        return 1;
    }

    HANDLE hThread = CreateThread(NULL,0,threadFunc,NULL,0,NULL);
    if (hThread == NULL){
        cout << "Failed to created thread!" <<endl;
        return 1;
    }

    WaitForSingleObject(hThread,INFINITE);
    CloseHandle(hThread);
    FreeLibrary(hDll);

    return 0;
}