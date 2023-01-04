#include <iostream>
#include <string.h>

using namespace std;

template<class NameType, class AgeType>
class Person07
{
public:
	Person07(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson07()
	{
		cout << "name: " << this->m_Name << ", age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test07_1()
{
	Person07<string, int> p1("ËïÎò¿Õ", 999);
	p1.showPerson07();
}

int main07(void)
{
	test07_1();
	
	return 0;
}