#include <iostream>

using namespace std;

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test04_1()
{
	int a = 10;
	int b = 20;
	char c = 'c'; // a - 97, c - 99

	cout << myAdd01(a, c) << endl;

	//�Զ������Ƶ�
	//cout << myAdd02(a, c) << endl; //�޷�������ʽ����ת��

	//��ʾָ������
	cout << myAdd02<int>(a, c) << endl; //�ɷ�����ʽ����ת��

}

int main04(void)
{
	test04_1();

	return 0;
}