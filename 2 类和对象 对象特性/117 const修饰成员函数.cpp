#include <iostream>

using namespace std;

class Person117
{
public:

	// this ָ��ı��� ָ�볣�� - ָ���ָ�򲻿��޸�
	// const person * const this
	// �ڳ�Ա���������const ���ε���thisָ�� ��ָ��ָ���ֵҲ�������޸�
	void showPerson117() const
	{
		this->m_B = 100;
		//this->m_A = 100; this ָ���ǲ������޸�ָ���ָ���
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B;  //������� ��ʹ�ڳ������� Ҳ�����޸����ֵ �ӹؼ���mutable
};

void test11701()
{
	Person117 p;
	p.showPerson117();
}

void test11702()
{
	const Person117 p;  //�ڶ���ǰ��const ��Ϊ������
	//p.m_A = 100;
	p.m_B = 100;  //m_B������ֵ �ڳ�������Ҳ�����޸�
	//p.func();  //�����󲻿��Ե�����ͨ�ĳ�Ա���� ��Ϊ��ͨ�ĳ�Ա���������޸�����

	//������ֻ�ܵ��ó�����
}

int main117()
{
	test11701();
    test11702();

	return 0;
}

