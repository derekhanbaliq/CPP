#include <iostream>

using namespace std;

class Base132
{
public:

	static int m_A;

	static void func()
	{
		cout << "base static func" << endl;
	}
};

int Base132::m_A = 100;

class Son132 :public Base132
{
public:

	static int m_A;

	static void func()
	{
		cout << "son static func" << endl;
	}
};

int Son132::m_A = 200;

void test13201()
{
	// 通过对象访问
	Son132 s;
	cout << "m_A = " << s.m_A << endl;
	cout << "m_A = " << s.Base132::m_A << endl;

	// 通过类名访问
	cout << "m_A = " << Son132::m_A << endl;
	cout << "m_A = " << Base132::m_A << endl;
	cout << "m_A = " << Son132::Base132::m_A << endl;

}

void test13202()
{
	Son132 s;

	s.func();
	s.Base132::func();

	Son132::func();
	Base132::func();
	Son132::Base132::func();
}

int main132()
{
	test13201();
	test13202();

	return 0;
}
