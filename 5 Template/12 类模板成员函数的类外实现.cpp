#include <iostream>
#include <string.h>

using namespace std;

template<class T1, class T2>
class Person12
{
public:

	Person12(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson12();
	//{
	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//���캯��������ʵ��
template<class T1, class T2>
Person12<T1, T2>::Person12(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//��Ա����������ʵ��
template<class T1, class T2>
void Person12<T1, T2>::showPerson12()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
}

void test12()
{
	Person12<string, int> p1("TOM", 20);
	p1.showPerson12();

}

int main12(void)
{
	test12();

	return 0;
}