#include <iostream>
#include <string>

using namespace std;

class Phone112
{
public:
	Phone112(string pName)
	{
		cout << "Phone�Ĺ��캯���ĵ���" << endl;
		m_PName = pName;
	}

	string m_PName;
};


class Person112
{
public:
	// Phone m_Phone = pName ��ʽת����
	Person112(string name, string pName):m_Name(name), m_Phone(pName) 
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	string m_Name;
	Phone112 m_Phone;

};

void test11201()
{
	Person112 p("����", "ƻ��");

	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}

int main112()
{
	test11201();

	return 0;
}