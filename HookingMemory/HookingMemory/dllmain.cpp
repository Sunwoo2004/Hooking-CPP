#include "stdafx.h"
#include "TestClass.h"

using namespace std;

void OnTest()
{
    ItemList &rkItemList = *reinterpret_cast<ItemList*>(0x0164A9C0);
    ioItem kItem;
    kItem.m_iCode = 9999;
    strcpy(kItem.m_szItemName, "Hooking");
    rkItemList.push_back(kItem);
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnTest, NULL, 0, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}