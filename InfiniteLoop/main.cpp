#include <windows.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    
    while(true){
        int value =  MessageBox(NULL, "HELLO :))" , "AHAHAHAHAHAHAHAHAHAAHHAHA", MB_OK | MB_ICONWARNING);
    }
    return value;
}