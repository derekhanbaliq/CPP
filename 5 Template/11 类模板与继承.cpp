#include <iostream>
#include <string.h>

using namespace std;

template<class T>
class Base11
{
	T m;
};

class Son11 : public Base11<string> //����ָ�������е�T���������� ���ܼ̳и�����
{

};

void test11_1()
{
	Son11 s1;
}

//��������ָ��������T���� ����Ҳ��Ҫ�����ģ��
template<class T1, class T2>
class Son11_2 :public Base11<T2>
{
public:
	Son11_2()
	{
		cout << "T1���������ͣ�" << typeid(T1).name() << endl;
		cout << "T2���������ͣ�" << typeid(T2).name() << endl;
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
