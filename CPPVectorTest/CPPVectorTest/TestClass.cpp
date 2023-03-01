#include "stdafx.h"
#include "TestClass.h"

using namespace std;

TestClass* TestClass::sg_Instance = NULL;


TestClass& TestClass::GetInstance()
{
	if (sg_Instance == NULL)
	{
		sg_Instance = new TestClass;
	}
	return *sg_Instance;
}

TestClass::TestClass()
{
	Init();
}

TestClass::~TestClass()
{

}

void TestClass::Init()
{
	m_vItemList.clear();
	cout << "아이템 리스트의 포인터 주소 : " <<  &m_vItemList << endl;
}

void TestClass::AddItem(int iCode, const char* szItemName)
{
	ioItem kItem;
	kItem.m_iCode = iCode;
	strcpy(kItem.m_szItemName, szItemName);
	m_vItemList.push_back(kItem);
}

void TestClass::ShowList()
{
	char szBuf[MAX_PATH * 2];
	int iCnt = m_vItemList.size();
	for (int i = 0; i < iCnt; i++)
	{
		const ioItem& rkItem = m_vItemList[i];
		sprintf(szBuf, "Code : %d, Name : %s", rkItem.m_iCode, rkItem.m_szItemName);
		cout << szBuf << endl;
	}
}