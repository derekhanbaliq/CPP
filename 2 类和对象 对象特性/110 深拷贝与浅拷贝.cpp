#include <iostream>

using namespace std;

class Person110
{
public:
	Person110()
	{
		cout << "Ĭ�Ϲ���" << endl;
	}
	Person110(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);  //��ָ����ն�������
		cout << "�вι���" << endl;
	}

	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person110(const Person110& p)  //�β�/ʵ��p�������޸ĵ� �������ã�
	{
		cout << "��������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height; ������Ĭ��ʵ�ֵľ������д���
		
		//�������
		m_Height = new int(*p.m_Height);
	}

	~Person110()
	{
		//�������� �����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "����" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test11001()
{
	Person110 p1(18, 160);

	cout << "p1����" << p1.m_Age << " ���" << *p1.m_Height << endl;

	Person110 p2(p1);

	cout << "p2����" << p2.m_Age << " ���" << *p2.m_Height << endl;
}

int main110()
{
	test11001();
	
	return 0;
}