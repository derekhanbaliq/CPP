#include <iostream>

using namespace std;

#define PI 3.14

class Circle
{
	//����Ȩ��
public: //����Ȩ��
	
	//����
	int m_r;

	//��Ϊ
	double CalculateZC()//��ȡԲ���ܳ�
	{
		return 2 * PI * m_r;
	}
};

int main099()
{
	//���������Բ/���� -- ʵ������ͨ��һ���� ����һ������Ĺ���
	Circle c1;

	//��Բ/��������Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ" << c1.CalculateZC() << endl;
	
	return 0;
}

