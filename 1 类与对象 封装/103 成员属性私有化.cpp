#include <iostream>
#include <string>

using namespace std;

class Person103
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}

	int getAge()
	{
		return m_Age;
	}
	void setAge(int age) //2 ������ݵ���Ч��
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover) //1 �Լ����ƶ�дȨ��
	{
		m_Lover = lover;
	}


private:
	string m_Name; //�ɶ���д

	int m_Age; //ֻ��

	string m_Lover; //ֻд

};

int main103()
{
	Person103 p;

	p.setName("����");
	cout << "����Ϊ��" << p.getName() << endl;

	p.setAge(1000);
	cout << "����Ϊ��" << p.getAge() << endl;

	p.setLover("�־�");

	return 0;
}

