#include <iostream>

using namespace std;

class Base1331
{
public:
	Base1331()
	{
		m_A = 100;
	}

	int m_A;
};

class Base1332
{
public:
	Base1332()
	{
		m_A = 200;
	}

	int m_A;
};

class Son133: public Base1331, public Base1332
{
public:
	Son133()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C, m_D;
};

void test13301()
{
	Son133 s;

	cout << "sizeof son " << sizeof(s) << endl;

	cout << "m_A = " << s.Base1331::m_A << endl; //二义性
	cout << "m_A = " << s.Base1332::m_A << endl; //二义性

}

int main133()
{
	test13301();

	return 0;
}
