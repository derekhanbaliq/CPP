#include <iostream>
#include <string.h>

using namespace std;

class Person
{
public:
	
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//�Ա����������Ƿ����
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b) //��һ�ַ������������������ ���鷳
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯��Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test06_1()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test06_2()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main06(void)
{
	test06_1();
	test06_2();

	return 0;
}