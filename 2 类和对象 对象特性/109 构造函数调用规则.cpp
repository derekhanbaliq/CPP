#include <iostream>

using namespace std;

//1 ����һ���� C++���������ÿ���඼���������������
//Ĭ�Ϲ���(��ʵ��)
//��������(��ʵ��)
//��������(ֵ����)

//2 �������д���вι��캯�� �������Ͳ����ṩĬ�Ϲ��� ��Ȼ�ṩ��������

//3 �������д�˿������캯�� �������Ͳ����ṩ������ͨ���캯����

class Person109
{
public:
	Person109()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person109(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}
	//Person109(const Person109 & p)
	//{
	//	cout << "Person�Ŀ������캯������" << endl;
	//	m_Age = p.m_Age;
	//}

	~Person109()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

void test10901()
{
	Person109 p;  //Ĭ�Ϲ���
	p.m_Age = 18;

	Person109 p2(p);  //��������
	cout << "p2������Ϊ" << p2.m_Age << endl;
}

void test10902()
{
	Person109 p;  //Ĭ�Ϲ���
	Person109 p1(100);  //��������

	cout << "p2����Ϊ" << p1.m_Age << endl;
}

int main10902()
{
	//test10901();
	test10902();

	return 0;
}