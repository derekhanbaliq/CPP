#include <iostream>

using namespace std;

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test04_1()
{
	int a = 10;
	int b = 20;
	char c = 'c'; // a - 97, c - 99

	cout << myAdd01(a, c) << endl;

	//自动类型推导
	//cout << myAdd02(a, c) << endl; //无法发生隐式类型转换

	//显示指定类型
	cout << myAdd02<int>(a, c) << endl; //可发生隐式类型转换

}

int main04(void)
{
	test04_1();

	return 0;
}