#include <iostream>

using namespace std;

#define PI 3.14

class Circle
{
public:  //����Ȩ�� ����Ȩ��
	
	//����
	int m_r; //�뾶

	// ��Ϊ
	double CalculateZC()  //��ȡԲ���ܳ�
	{
		return 2 * PI * m_r;
	}
};

int main099()
{
	Circle c1;  //ͨ��Բ�࣬����Բ�Ķ���c1����һ�������Բ

	c1.m_r = 10;  //��Բ/��������Խ��и�ֵ

	cout << "Բ���ܳ�Ϊ " << c1.CalculateZC() << endl;
	
	return 0;
}

