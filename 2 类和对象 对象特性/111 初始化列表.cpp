#include <iostream>

using namespace std;

class Person111
{
public:

	//��ͳ�ĳ�ʼ������
	//Person111(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//��ʼ���б�ķ�����ʼ������
	Person111(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{
		;
	}

	int m_A;
	int m_B;
	int m_C;
};

void test11101()
{
	//Person111 p(10, 20, 30);
	Person111 p(10, 20, 30);
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}

int main111()
{
	test11101();

	return 0;
}