#include "stdafx.h"
#include "TestClass.h"

using namespace std;

int main()
{
	g_TestClass.AddItem(11011, "아이템1");
	g_TestClass.AddItem(10169, "아이템2");
	system("pause");
	g_TestClass.ShowList();
	system("pause");
}