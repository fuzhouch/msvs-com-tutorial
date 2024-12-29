// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the INPROCCOMSAYHELLO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// INPROCCOMSAYHELLO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef INPROCCOMSAYHELLO_EXPORTS
#define INPROCCOMSAYHELLO_API __declspec(dllexport)
#else
#define INPROCCOMSAYHELLO_API __declspec(dllimport)
#endif

// This class is exported from the dll
class INPROCCOMSAYHELLO_API CInprocCOMSayHello {
public:
	CInprocCOMSayHello(void);
	// TODO: add your methods here.
};

extern INPROCCOMSAYHELLO_API int nInprocCOMSayHello;

INPROCCOMSAYHELLO_API int fnInprocCOMSayHello(void);
