#include <iostream>
#include <string.h>

using namespace std;

class Person09_1
{
public:
	void showPerson09_1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person09_2
{
public:
	void showPerson09_2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass09
{
public:
	T obj;

	//类模板中的成员函数
	void func09_1()
	{
		obj.showPerson09_1();
	}
	void func09_2()
	{
		obj.showPerson09_2();
	}
};

void test09_1()
{
	MyClass09<Person09_1> m;
	m.func09_1();
	//m.func09_2();

}

int main09(void)
{
	test09_1();
	
	return 0;
}
