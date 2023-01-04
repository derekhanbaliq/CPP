#include <iostream>

using namespace std;

class Base129
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son129 :public Base129
{
public:
	int m_D;
};

void test129()
{
	cout << "size of son =" << sizeof(Son129) << endl;
}

int main129()
{
	test129();

	return 0;
}