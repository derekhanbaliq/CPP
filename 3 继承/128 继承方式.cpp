#include <iostream>

using namespace std;

class Base1281
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Base1282: public Base1281
{
public:
	void func()
	{
		m_A = 10;
	}
};


int main128(void)
{


	return 0;
}
