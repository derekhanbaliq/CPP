#include <iostream>

using namespace std;

class Person106
{
public:
	Person106()
	{
		cout << "Person的构造函数的调用" << endl;
	}

	~Person106()
	{
		cout << "Person的析构函数的调用" << endl;
	}

};

void test10601()
{
	//Person106 p; //在栈上的数据 test01执行完即释放该对象
}

int main106()
{
	test10601();

	Person106 p; //return 0时析构 所以只看到了构造函数

	system("Pause");

	return 0;
}
