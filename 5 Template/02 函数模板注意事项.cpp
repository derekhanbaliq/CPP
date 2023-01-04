#include <iostream>

using namespace std;

template<class T> //typename可以直接替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test02_1()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	mySwap(a, b);
	//mySwap(a, c); //wrong!
	cout << "a = " << a << ", b = " << b << endl;
}

template<class T>
void func()
{
	cout << "func调用" << endl;
}

void test02_2()
{
	//func(); //自动类型推导 推导不出来 会报错
	func<int>();
}

int main02(void)
{
	test02_1();
	test02_2();

	return 0;
}