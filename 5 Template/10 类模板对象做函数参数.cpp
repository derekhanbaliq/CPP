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
		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1 指定传入类型
void printPerson10_1(Person10_1<string, int>&p)
{
	p.showPerson10_x();
}
void test10_1()
{
	Person10_1<string, int> p("孙悟空", 100);
	printPerson10_1(p);
}

//2 参数模板化
template<class T1, class T2>
void printPerson10_2(Person10_1<T1, T2> &p)
{
	p.showPerson10_x();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test10_2()
{
	Person10_1<string, int> p("猪八戒", 90);
	printPerson10_2(p);
}

// 3 整个类模板化
template<class T>
void printPerson10_3(T &p)
{
	p.showPerson10_x();
	cout << "T的类型为：" << typeid(T).name() << endl;
}
void test10_3()
{
	Person10_1<string, int> p("唐僧", 30);
	printPerson10_3(p);
}

int main10(void)
{
	test10_1();
	test10_2();
	test10_3();

	return 0;
}