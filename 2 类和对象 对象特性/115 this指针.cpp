#include <iostream>

using namespace std;

//thisָ�����;
//1 ������Ƴ�ͻ
//2 ���ض�������*this


class Person115
{
public:

	Person115(int age)
	{
		//thisָ��ָ����±����õĳ�Ա���������Ķ���
		this->age = age;
	}
	
	Person115& PersonAddAge(Person115 &p) //���÷��� ���صĲ����¶��� ��һֱ��p2
	{
		this->age += p.age;
		return *this; //this ָ��p2��ָ�� *thisָ��ľ���p2�������ı���
	}

	int age;
};

//1 ������Ƴ�ͻ
void test11501()
{
	Person115 p1(18);
	cout << "p1������" << p1.age << endl;
}

void test11502()
{
	Person115 p1(10);
	Person115 p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2������" << p2.age << endl;

}

int main115()
{
	test11501();
	test11502();

	return 0;
}

