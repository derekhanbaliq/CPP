#include <iostream>
#include <string>

using namespace std;

class Student
{
public:

	//类中的属性和行为 统称为成员

	//属性 - 成员属性 成员变量
	string m_Name;
	int m_Id;

	//行为 - 成员方法 成员方法
	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
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
	//创建一个具体学生 实例化对象
	Student s1;

	s1.setName("张三");
	s1.setId(1);

	s1.showStudent();

	Student s2;

	s2.m_Name = "李四";
	s2.m_Id = 222;

	s2.showStudent();

	return 0;
}

