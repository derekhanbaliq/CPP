#include <iostream>
#include <string>

using namespace std;

class Student
{
public:

	//���е����Ժ���Ϊ ͳ��Ϊ��Ա

	//���� - ��Ա���� ��Ա����
	string m_Name;
	int m_Id;

	//��Ϊ - ��Ա���� ��Ա����
	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ�" << m_Id << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;
	}
};

int main100()
{
	//����һ������ѧ�� ʵ��������
	Student s1;

	s1.setName("����");
	s1.setId(1);

	s1.showStudent();

	Student s2;

	s2.m_Name = "����";
	s2.m_Id = 222;

	s2.showStudent();

	return 0;
}

