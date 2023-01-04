#include <iostream>

using namespace std;

class Base131
{
public:
	Base131()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base func" << endl;
	}

	void func(int a)
	{
		cout << "Base func(int a)" << endl;
	}
	
	int m_A;
};

class Son131 :public Base131
{
public:
	Son131()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son func" << endl;
	}
	void func(int a)
	{
		cout << "Son func(int a)" << endl;
	}

	int m_A;
};

void test131()
{
	Son131 s;

	cout << "m_A = " << s.m_A << endl;
	cout << "m_A = " << s.Base131::m_A << endl;
}

void test13102()
{
	Son131 s;

	s.func();
	s.func(100);
	s.Base131::func();
	s.Base131::func(100);
}

int main131()
{
	test131();
	test13102();

	return 0;
}
