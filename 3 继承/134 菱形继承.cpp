#include <iostream>

using namespace std;

class Animal
{
public:
	int m_Age;
};

class Sheep : virtual public Animal {};

class Camel : virtual public Animal {};

class Alpaca : public Sheep, public Camel
{

};

void test13401()
{
	Alpaca a;

	a.Sheep::m_Age = 18;
	a.Camel::m_Age = 28;

	cout << a.Sheep::m_Age << endl;
	cout << a.Camel::m_Age << endl;

	cout << a.m_Age << endl;
}

int main()
{
	test13401();

	return 0;
}