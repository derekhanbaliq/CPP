#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Person187
{
public:
	Person187(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test18701()
{
	vector<Person187>v;
	
	Person187 p1("man", 10);
	Person187 p2("qqq", 20);
	Person187 p3("aaa", 30);
	Person187 p4("zzz", 40);
	Person187 p5("eee", 50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person187>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << ", 年龄：" << (*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << ", 年龄：" <<  it->m_Age << endl;
	}
}

void test18702()
{
	vector<Person187*>v;

	Person187 p1("man", 10);
	Person187 p2("qqq", 20);
	Person187 p3("aaa", 30);
	Person187 p4("zzz", 40);
	Person187 p5("eee", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	for (vector<Person187*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << ", 年龄：" << (*it)->m_Age << endl;
	}
}

int main187()
{
	//test18701();
	test18702();

	return 0;
}
