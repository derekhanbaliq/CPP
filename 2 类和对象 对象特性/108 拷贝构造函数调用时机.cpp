#include <iostream>

using namespace std;

//1 ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2 ֵ���ݵķ�ʽ������������ֵ

//3 ֵ�ķ�ʽ���ؾֲ�����

class Person108
{
public:
	Person108()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person108(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}
	Person108(const Person108& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person108()
	{
		cout << "Person���������캯������" << endl;
	}

	int m_Age;
};

//1 ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test10801()
{
	Person108 p1(20); //�вι���
	Person108 p2(p1); //��������
	cout << "p2������Ϊ" << p2.m_Age << endl;
}

//2 ֵ���ݵķ�ʽ������������ֵ
void doWork(Person108 p) //ʵ�δ��ݸ��β�ʱ �����˿�������
{
	;
}
void test10802()
{
	Person108 p;
	doWork(p);
}

//3 ֵ�ķ�ʽ���ؾֲ�����
Person108 doWork2()
{
	Person108 p1;
	cout << (int*)&p1 << endl;
	return p1; //����һ���µ� Ȼ�󷵻ػ����
}
void test10803()
{
	Person108 p = doWork2();
	cout << (int*)&p << endl;
}

int main108(void)
{
	//test10801();
	//test10802();
	test10803();

	return 0;
}