#include <iostream>

using namespace std;

class Person106
{
public:
	Person106()
	{
		cout << "Person�Ĺ��캯���ĵ���" << endl;
	}

	~Person106()
	{
		cout << "Person�����������ĵ���" << endl;
	}

};

void test10601()
{
	//Person106 p; //��ջ�ϵ����� test01ִ���꼴�ͷŸö���
}

int main106()
{
	test10601();

	Person106 p; //return 0ʱ���� ����ֻ�����˹��캯��

	system("Pause");

	return 0;
}
