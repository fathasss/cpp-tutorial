#include <windows.h>

using namespace std;

int jokeMethod(int msgBoxID){

    msgBoxID = MessageBox(NULL, "Are you idiot ? ", "joke popup", MB_ICONQUESTION | MB_YESNO);
    switch (msgBoxID) {
            case IDYES:
                MessageBox(NULL, "I knew it :D", "Status", MB_OK | MB_ICONINFORMATION);
                break;
            case IDNO:
                jokeMethod(6);
                break;
        }
    return msgBoxID;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    
    int localvalue = jokeMethod(0);
    return localvalue;
}
