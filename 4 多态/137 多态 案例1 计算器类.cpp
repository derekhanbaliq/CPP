#include <iostream>
#include <string>

using namespace std;

class Cal
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

	int m_Num1;
	int m_Num2;
};

class AbsCal
{
public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;

};

class AddCal :public AbsCal
{
public:

	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCal :public AbsCal
{
public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MulCal :public AbsCal
{
public:

	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test13701()
{
	Cal c;

	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

void test13702()
{
	AbsCal* abc = new AddCal;
	
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

	delete abc;


	abc = new SubCal;

	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;

	delete abc;
}

int main137()
{
	test13701();
	test13702();

	return 0;
}
