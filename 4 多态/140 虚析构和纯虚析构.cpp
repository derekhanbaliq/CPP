#include <iostream>
#include <string>

using namespace std;

class Animal140
{
public:

	Animal140()
	{
		cout << "Animal 构造" << endl;
	}

	//virtual ~Animal140() //虚析构 解决父类指针释放子类对象时不干净的问题
	//{
	//	cout << "Animal 析构" << endl;
	//}

	virtual ~Animal140() = 0; //纯虚析构 需要声明 也需要实现

	virtual void speak() = 0;

};

Animal140::~Animal140() //纯虚析构
{
	cout << "animal纯虚析构" << endl;
}

class Cat140 :public Animal140
{
public:

	Cat140(string name)
	{
		cout << "cat 构造" << endl;
		m_Name = new string(name);
	}

	~Cat140()
	{
		if (m_Name != NULL)
		{
			cout << "cat 析构" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	virtual void speak()
	{
		cout << *m_Name << " cat is speaking" << endl;
	}

	string* m_Name;

};

void test14001()
{
	Animal140* a = new Cat140("Tom");

	a->speak();

	delete a;
}

int main140()
{
	test14001();

	return 0;
}
