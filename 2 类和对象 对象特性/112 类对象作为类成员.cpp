#include <iostream>
#include <string>

using namespace std;

class Phone112
{
public:
	Phone112(string pName)
	{
		cout << "Phone的构造函数的调用" << endl;
		m_PName = pName;
	}

	string m_PName;
};


class Person112
{
public:
	// Phone m_Phone = pName 隐式转换法
	Person112(string name, string pName):m_Name(name), m_Phone(pName) 
	{
		cout << "Person的构造函数调用" << endl;
	}

	string m_Name;
	Phone112 m_Phone;

};

void test11201()
{
	Person112 p("张三", "苹果");

	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main112()
{
	test11201();

	return 0;
}