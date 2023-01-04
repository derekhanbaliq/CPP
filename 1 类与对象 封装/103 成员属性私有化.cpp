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
	void setAge(int age) //2 检测数据的有效性
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "你这个老妖精" << endl;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover) //1 自己控制读写权限
	{
		m_Lover = lover;
	}


private:
	string m_Name; //可读可写

	int m_Age; //只读

	string m_Lover; //只写

};

int main103()
{
	Person103 p;

	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;

	p.setAge(1000);
	cout << "年龄为：" << p.getAge() << endl;

	p.setLover("仓井");

	return 0;
}

