#include <iostream>

using namespace std;

//成员变量和成员函数分开存储

class Person114
{
public:
	int m_A; //非静态成员变量 属于类的对象上
	static int m_B; //静态成员变量 不属于类的对象上

	void func114() //非静态成员函数 不属于类的对象上
	{
		;
	}

	static void func1142() //静态成员函数 不属于类的对象上
	{
		;
	}
};

int Person114::m_B = 0; //类内声明 类外初始化

void test11401()
{
	Person114 p;

	//空对象占用内存空间为1 - C++编译器会给每个空对象也分配一个字节空间 是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "sizeof p = " << sizeof(p) << endl;
}

void test11402()
{
	Person114 p;
	
	//有非静态成员变量的对象占用内存空间为4 -> 加了静态成员变量 对象占用空间仍为4
	//加上非静态成员函数 / 静态成员函数也是4
	cout << "sizeof p = " << sizeof(p) << endl;
}

int main114()
{
	//test11401();
	test11402();

	return 0;
}
