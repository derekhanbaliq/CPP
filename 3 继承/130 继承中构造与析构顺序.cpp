#include <iostream>

using namespace std;

class Base130
{
public:
	Base130()
	{
		cout << "base ����" << endl;
	}
	~Base130()
	{
		cout << "base ����" << endl;
	}
};

class Son130 :public Base130
{
public:
	Son130()
	{
		cout << "son ����" << endl;
	}
	~Son130()
	{
		cout << "son ����" << endl;
	}

};

void test130()
{
	//Base130 b;
	Son130 s;

}

int main130()
{
	test130();

	return 0;
}