#include <iostream>

using namespace std;

//1 创建一个类 C++编译器会给每个类都添加至少三个函数
//默认构造(空实现)
//析构函数(空实现)
//拷贝构造(值拷贝)

//2 如果我们写了有参构造函数 编译器就不在提供默认构造 依然提供拷贝构造

//3 如果我们写了拷贝构造函数 编译器就不在提供其他普通构造函数了

class Person109
{
public:
	Person109()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person109(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}
	//Person109(const Person109 & p)
	//{
	//	cout << "Person的拷贝构造函数调用" << endl;
	//	m_Age = p.m_Age;
	//}

	~Person109()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

void test10901()
{
	Person109 p;  //默认构造
	p.m_Age = 18;

	Person109 p2(p);  //拷贝构造
	cout << "p2的年龄为" << p2.m_Age << endl;
}

void test10902()
{
	Person109 p;  //默认构造
	Person109 p1(100);  //拷贝构造

	cout << "p2年龄为" << p1.m_Age << endl;
}

int main10902()
{
	//test10901();
	test10902();

	return 0;
}