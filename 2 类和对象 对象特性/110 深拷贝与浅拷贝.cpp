#include <iostream>

using namespace std;

class Person110
{
public:
	Person110()
	{
		cout << "默认构造" << endl;
	}
	Person110(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);  //用指针接收堆区数据
		cout << "有参构造" << endl;
	}

	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person110(const Person110& p)  //形参/实参p本身不能修改掉 常量引用！
	{
		cout << "拷贝构造" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height; 编译器默认实现的就是这行代码
		
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	~Person110()
	{
		//析构代码 将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test11001()
{
	Person110 p1(18, 160);

	cout << "p1年龄" << p1.m_Age << " 身高" << *p1.m_Height << endl;

	Person110 p2(p1);

	cout << "p2年龄" << p2.m_Age << " 身高" << *p2.m_Height << endl;
}

int main110()
{
	test11001();
	
	return 0;
}