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
	//Person08 p("孙悟空", 1000); //1 无法使用自动类型推导
	Person08<string, int> p("孙悟空", 1000); //正确 只能用显示指定类型
	
	p.showPerson08();

}

//2 类模板在模板参数列表中可以有默认参数
void test08_2()
{
	Person08<string> p("猪八戒", 999); //int 默认参数

	p.showPerson08();
}

int main08(void)
{
	test08_1();
	test08_2();

	return 0;
}
