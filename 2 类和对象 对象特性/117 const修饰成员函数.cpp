#include <iostream>

using namespace std;

class Person117
{
public:

	// this 指针的本质 指针常量 - 指针的指向不可修改
	// const person * const this
	// 在成员函数后面加const 修饰的事this指向 让指针指向的值也不可以修改
	void showPerson117() const
	{
		this->m_B = 100;
		//this->m_A = 100; this 指针是不可以修改指针的指向的
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B;  //特殊变量 即使在常函数中 也可以修改这个值 加关键字mutable
};

void test11701()
{
	Person117 p;
	p.showPerson117();
}

void test11702()
{
	const Person117 p;  //在对象前加const 变为常对象
	//p.m_A = 100;
	p.m_B = 100;  //m_B是特殊值 在常对象下也可以修改
	//p.func();  //常对象不可以调用普通的成员函数 因为普通的成员函数可以修改属性

	//常对象只能调用常函数
}

int main117()
{
	test11701();
    test11702();

	return 0;
}

