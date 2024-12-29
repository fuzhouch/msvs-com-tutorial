// InprocCOMSayHello.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "InprocCOMSayHello.h"


// This is an example of an exported variable
INPROCCOMSAYHELLO_API int nInprocCOMSayHello=0;

// This is an example of an exported function.
INPROCCOMSAYHELLO_API int fnInprocCOMSayHello(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CInprocCOMSayHello::CInprocCOMSayHello()
{
    return;
}
