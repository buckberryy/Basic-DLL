// dllmain.cpp : DLL uygulamasının giriş noktasını tanımlar.
#include "pch.h"
#include "dllmain.h"
#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    return TRUE;
}
EXTERN_DLL_EXPORT void HelloWorld()
{
    MessageBox(NULL, TEXT("Hello World"),
        TEXT("In a DLL"), MB_OK);
}
EXTERN_DLL_EXPORT void HelloZayotem()
{
    MessageBox(NULL, TEXT("Hello ZAYOTEM"),
        TEXT("Teşekkürler"), MB_OK);
}

