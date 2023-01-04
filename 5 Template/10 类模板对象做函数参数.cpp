#include <iostream>
#include <string.h>

using namespace std;

template<class T1, class T2>
class Person10_1
{
public:

	Person10_1(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson10_x()
	{
		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1 ָ����������
void printPerson10_1(Person10_1<string, int>&p)
{
	p.showPerson10_x();
}
void test10_1()
{
	Person10_1<string, int> p("�����", 100);
	printPerson10_1(p);
}

//2 ����ģ�廯
template<class T1, class T2>
void printPerson10_2(Person10_1<T1, T2> &p)
{
	p.showPerson10_x();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
void test10_2()
{
	Person10_1<string, int> p("��˽�", 90);
	printPerson10_2(p);
}

// 3 ������ģ�廯
template<class T>
void printPerson10_3(T &p)
{
	p.showPerson10_x();
	cout << "T������Ϊ��" << typeid(T).name() << endl;
}
void test10_3()
{
	Person10_1<string, int> p("��ɮ", 30);
	printPerson10_3(p);
}

int main10(void)
{
	test10_1();
	test10_2();
	test10_3();

	return 0;
}