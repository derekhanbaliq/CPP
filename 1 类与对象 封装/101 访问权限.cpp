#include <iostream>

using namespace std;

class Person
{
public: //����Ȩ��
	string m_Name;

protected: //����Ȩ��
	string m_Car;

private: //˽��Ȩ��
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main101(void)
{
	Person p1;
	
	p1.m_Name = "����";
	//p1.m_Car = "����";
	//p1.m_Password = 123;

	return 0;
}

