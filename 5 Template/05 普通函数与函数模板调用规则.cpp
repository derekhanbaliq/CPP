#include <iostream>

using namespace std;

void myPrint(int a, int b)
{
	cout << "调用的是普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用的是函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "调用的是重载的函数模板" << endl;
}

void test05_1()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);
	
	//通过空模板参数列表 强制调用函数模板
	myPrint<>(a, b);

	myPrint(a, b, 100); //可重载

	//如果函数模板产生更好的匹配 优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2); //推导成T比char转int更容易
}

int main05(void)
{
	test05_1();

	return 0;
}