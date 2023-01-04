#include <iostream>
#include <string.h>

using namespace std;

template<class T>
class Base11
{
	T m;
};

class Son11 : public Base11<string> //必须指出父类中的T的数据类型 才能继承给子类
{

};

void test11_1()
{
	Son11 s1;
}

//如果想灵活指定父类中T类型 子类也需要变成类模板
template<class T1, class T2>
class Son11_2 :public Base11<T2>
{
public:
	Son11_2()
	{
		cout << "T1的数据类型：" << typeid(T1).name() << endl;
		cout << "T2的数据类型：" << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test11_2()
{
	Son11_2<int, char> s2;
}

int main11(void)
{
	test11_1();
	test11_2();

	return 0;
}
