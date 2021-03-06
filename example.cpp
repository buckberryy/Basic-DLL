#include <windows.h>

typedef VOID (*DLLPROC) (LPTSTR);
int main()
{
	HINSTANCE hDLL;      
    DLLPROC dllfunct;  
    
    hDLL = LoadLibrary("exported.dll");
    if (NULL != hDLL)
    {
        dllfunct = (DLLPROC)GetProcAddress(hDLL, "HelloZayotem");
        if (NULL != dllfunct)
        	dllfunct(0);
        
        FreeLibrary(hDLL);
    }
    
	return 0;
	
}

