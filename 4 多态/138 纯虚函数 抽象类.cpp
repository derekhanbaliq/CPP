#include <iostream>

using namespace std;

class Base138
{
public:

	virtual void func() = 0;

};

class Son138 :public Base138
{
public:
	virtual void func()
	{
		cout << "hello" << endl;
	}

};

void test13801()
{
	//Son138 s;

	//Base138* base = new Son138;
	//base->func();

	Son138 a;
	Base138 & b = a;
	b.func();
}

int main138()
{
	test13801();

	return 0;
}