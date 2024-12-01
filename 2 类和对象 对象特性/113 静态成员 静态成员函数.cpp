#include <iostream>

using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person113
{
public:

	static void func113()  //静态成员函数
	{
		cout << "static void func调用" << endl;
		m_A = 100;
		//m_B = 200; 静态成员函数只能访问静态成员变量 不能访问非静态成员变量 因为无法区分到底是那个对象的 
	}
	 
	static int m_A;  //静态成员变量
	int m_B;  //非静态成员变量

private:
	static void func1132()
	{
		cout << "static void func2 调用" << endl;
	}
};

int Person113::m_A = 0;

void test11301()
{
	//1 通过对象进行访问
	Person113 p;
	p.func113();

	//2 通过类名访问
	Person113::func113();

	//Person113::func1132(); 类外访问不到私有静态成员函数

}

int main113()
{
	test11301();

	return 0;
}
