#include <iostream>

using namespace std;

class Base130
{
public:
	Base130()
	{
		cout << "base 构造" << endl;
	}
	~Base130()
	{
		cout << "base 析构" << endl;
	}
};

class Son130 :public Base130
{
public:
	Son130()
	{
		cout << "son 构造" << endl;
	}
	~Son130()
	{
		cout << "son 析构" << endl;
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