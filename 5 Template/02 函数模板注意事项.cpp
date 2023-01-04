#include <iostream>

using namespace std;

template<class T> //typename����ֱ���滻��class
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
	cout << "func����" << endl;
}

void test02_2()
{
	//func(); //�Զ������Ƶ� �Ƶ������� �ᱨ��
	func<int>();
}

int main02(void)
{
	test02_1();
	test02_2();

	return 0;
}