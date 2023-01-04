#include <iostream>
#include <string.h>

using namespace std;

template<class NameType, class AgeType = int>
class Person08
{
public:
	
	Person08(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson08()
	{
		cout << "name: " << this->m_Name << ", age: " << this->m_Age << endl;
	}
	
	NameType m_Name;
	AgeType m_Age;
};

void test08_1()
{
	//Person08 p("�����", 1000); //1 �޷�ʹ���Զ������Ƶ�
	Person08<string, int> p("�����", 1000); //��ȷ ֻ������ʾָ������
	
	p.showPerson08();

}

//2 ��ģ����ģ������б��п�����Ĭ�ϲ���
void test08_2()
{
	Person08<string> p("��˽�", 999); //int Ĭ�ϲ���

	p.showPerson08();
}

int main08(void)
{
	test08_1();
	test08_2();

	return 0;
}
