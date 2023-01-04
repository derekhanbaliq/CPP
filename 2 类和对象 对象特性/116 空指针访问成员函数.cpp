#include <iostream>

using namespace std;

class Person116
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//报错原因是因为传入的指针是NULL

		if (this == NULL)
		{
			return;
		}

		cout << "Age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test11601()
{
	Person116* p = NULL;

	p->showClassName();

	//p->showPersonAge();
}

int main116(void)
{
	test11601();

	return 0;
}
