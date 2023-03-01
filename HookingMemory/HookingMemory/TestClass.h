#pragma once
#include <vector>

class ioItem
{
public:
	int m_iCode;
	char m_szItemName[MAX_PATH];
	ioItem()
	{
		m_iCode = 0;
		strcpy(m_szItemName, "");
	}
};

typedef std::vector<ioItem>ItemList;

class TestClass
{
public:
	ItemList m_vItemList;
public:
	void AddItem(int iCode, const char * szItemName);
	void ShowList();
private:
	static TestClass* sg_Instance;
public:
	static TestClass& GetInstance();
public:
	void Init();
	TestClass();
	~TestClass();
};

#define g_TestClass TestClass::GetInstance()