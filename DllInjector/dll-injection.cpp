#include "pch.h"
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule,DWORD ul_reason_for_call, LPVOID lpReserved){
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL,"Malicius DLL Attached and Executed!!!!" , "WARNING" , MB_ICONEXCLAMATION);
            break;
        case DLL_PROCESS_DETACH:
            MessageBox(NULL,"Malicius DLL DeAttached!!!!" , "WARNING" , MB_ICONEXCLAMATION);
            break;
        case DLL_THREAD_ATTACH:
            MessageBox(NULL,"Thread Created!" , "WARNING" , MB_ICONEXCLAMATION);
            break;
        case DLL_THREAD_DETACH:
            MessageBox(NULL,"thread terminated!" , "WARNING" , MB_ICONEXCLAMATION);
            break;
    }

    return TRUE;
}