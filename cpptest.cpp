#include <iostream>
#include <string>

#define PI 3.14

using namespace std;

class Circle
{
//����Ȩ�� 
public:
	
	//���� 
	int m_r;
	
	//��Ϊ 
	double calculateC()
	{
		double C;
		C = 2 * PI * m_r;
		return C;
	}
	
};

int main()
{
	string a;
	int x, y;
	x=1;
	y=2;
	Circle c1; //ͨ���ഴ������Ķ���--Բ��ʵ�������� 
	double zc;
	
	// cin & cout 
	cout << "hello world!" << endl;
	cin >> a;
	cout << "a=" << a << endl;
	
	//����
	swap(x, y);
	cout << "x=" << x << ", y=" << y << endl;
	
	//��
	c1.m_r=2;
	zc=c1.calculateC();
	cout << "�ܳ�Ϊ" << zc << endl; 
	
	return 0;
}

void swap(int &a1, int &a2)
{
	int temp;
	
	temp = a1;
	a1 = a2;
	a2 = temp;
}
