#include <iostream>

using namespace std;

class Person107
{
public:
	Person107()
	{
		cout << "Person���޲Σ�Ĭ�ϣ����캯������" << endl;
	}
	Person107(int a)
	{
		cout << "Person���вι��캯������" << endl;
		age = a;
	}
	Person107(const Person107 &p) //�������޸ĵ� �������ã�
	{
		cout << "Person�Ŀ������캯������" << endl;
		age = p.age; //������������ϵ��������� ������������
	}
	~Person107()
	{
		cout << "Person��������������" << endl;
	}

//private:
	int age;
};

void test10701()
{
	//1 ���ŷ�
	Person107 p1; //�޲�/Ĭ�Ϲ��캯���ĵ���
	Person107 p2(10); //�вι��캯���ĵ���
	Person107 p3(p2); //�������캯���ĵ���

	//ע������
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��() 
	//Person107 p1(); ������������һ������������ ����void func(); ������Ϊ�ڴ�������

	cout << "p2������Ϊ" << p2.age << endl;
	cout << "p3������Ϊ" << p3.age << endl;

	cout << "///////////////" << endl;

	//2 ��ʾ��
	Person107 p4; //�޲�/Ĭ�Ϲ���
	Person107 p5 = Person107(10); //�вι���
	Person107 p6 = Person107(p2); //��������

	Person107(10); //�������� �ص㣺��ǰ��ִ�н����� ϵͳ���������յ���������

	//ע������2 ��Ҫ���ÿ������캯�� ��ʼ����������
	//Person107(p6); //p6�ض���
	//����������Ϊ Person107(p6) === Person p6 һ�����������

	cout << "///////////////" << endl;

	//3 ��ʽת����
	Person107 p7 = 10; //�൱��д�� Person107 p7 = Person(10); �вι���
	Person107 p8 = p7;

	cout << "///////////////" << endl;
}

int main107(void)
{
	test10701();

	return 0;
}

