#include <iostream>

using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person113
{
public:

	static void func113()  //��̬��Ա����
	{
		cout << "static void func����" << endl;
		m_A = 100;
		//m_B = 200; ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���� ���ܷ��ʷǾ�̬��Ա���� ��Ϊ�޷����ֵ������Ǹ������ 
	}
	 
	static int m_A;  //��̬��Ա����
	int m_B;  //�Ǿ�̬��Ա����

private:
	static void func1132()
	{
		cout << "static void func2 ����" << endl;
	}
};

int Person113::m_A = 0;

void test11301()
{
	//1 ͨ��������з���
	Person113 p;
	p.func113();

	//2 ͨ����������
	Person113::func113();

	//Person113::func1132(); ������ʲ���˽�о�̬��Ա����

}

int main113()
{
	test11301();

	return 0;
}
