#include "stdafx.h"
#include "TestClass.h"

using namespace std;

int main()
{
	g_TestClass.AddItem(11011, "������1");
	g_TestClass.AddItem(10169, "������2");
	system("pause");
	g_TestClass.ShowList();
	system("pause");
}