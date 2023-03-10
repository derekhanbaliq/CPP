#include <iostream>
#include <string.h>

using namespace std;

//通过全局函数 打印Person信息

template<class T1, class T2>
class Person14;

//2 全局函数 类外实现
template<class T1, class T2>
void printPerson14_2(Person14<T1, T2> p)
{
	cout << "类外实现-- 姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person14
{
	//全局函数 类内实现
	friend void printPerson14(Person14<T1, T2> p)
	{
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数 是类外实现 需要让编译器提前知道这个函数的存在
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

//1 全局函数 类内实现
void test14_1()
{
	Person14<string, int> p("Tom", 20);
	printPerson14(p);
}

//2 全局函数 类外实现
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
