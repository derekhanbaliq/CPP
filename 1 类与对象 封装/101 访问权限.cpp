#include <iostream>

using namespace std;

class Person
{
public: //公共权限
	string m_Name;

protected: //保护权限
	string m_Car;

private: //私有权限
	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main101(void)
{
	Person p1;
	
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";
	//p1.m_Password = 123;

	return 0;
}

