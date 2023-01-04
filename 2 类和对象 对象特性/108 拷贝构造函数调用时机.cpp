#include <iostream>

using namespace std;

//1 使用一个已经创建完毕的对象来初始化一个新对象

//2 值传递的方式给函数参数传值

//3 值的方式返回局部对象

class Person108
{
public:
	Person108()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person108(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}
	Person108(const Person108& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person108()
	{
		cout << "Person的析构构造函数调用" << endl;
	}

	int m_Age;
};

//1 使用一个已经创建完毕的对象来初始化一个新对象
void test10801()
{
	Person108 p1(20); //有参构造
	Person108 p2(p1); //拷贝构造
	cout << "p2的年龄为" << p2.m_Age << endl;
}

//2 值传递的方式给函数参数传值
void doWork(Person108 p) //实参传递给形参时 调用了拷贝构造
{
	;
}
void test10802()
{
	Person108 p;
	doWork(p);
}

//3 值的方式返回局部对象
Person108 doWork2()
{
	Person108 p1;
	cout << (int*)&p1 << endl;
	return p1; //拷贝一个新的 然后返回会外边
}
void test10803()
{
	Person108 p = doWork2();
	cout << (int*)&p << endl;
}

int main108(void)
{
	//test10801();
	//test10802();
	test10803();

	return 0;
}