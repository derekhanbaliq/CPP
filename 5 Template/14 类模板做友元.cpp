#include <iostream>
#include <string.h>

using namespace std;

//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

template<class T1, class T2>
class Person14;

//2 ȫ�ֺ��� ����ʵ��
template<class T1, class T2>
void printPerson14_2(Person14<T1, T2> p)
{
	cout << "����ʵ��-- ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person14
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson14(Person14<T1, T2> p)
	{
		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ��� ������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson14_2<>(Person14<T1, T2> p);

public:
	Person14(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
private:
	T1 m_Name;
	T2 m_Age;
};

//1 ȫ�ֺ��� ����ʵ��
void test14_1()
{
	Person14<string, int> p("Tom", 20);
	printPerson14(p);
}

//2 ȫ�ֺ��� ����ʵ��
void test14_2()
{
	Person14<string, int> p("Jerry", 200);
	printPerson14_2(p);
}

int main14(void)
{
	test14_1();
	test14_2();

	return 0;
}
