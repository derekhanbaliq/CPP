#include <iostream>

using namespace std;

class Person107
{
public:
	Person107()
	{
		cout << "Person的无参（默认）构造函数调用" << endl;
	}
	Person107(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
		age = a;
	}
	Person107(const Person107 &p) //本身不能修改掉 常量引用！
	{
		cout << "Person的拷贝构造函数调用" << endl;
		age = p.age; //将传入的人身上的所有属性 拷贝到我身上
	}
	~Person107()
	{
		cout << "Person的析构函数调用" << endl;
	}

//private:
	int age;
};

void test10701()
{
	//1 括号法
	Person107 p1; //无参/默认构造函数的调用
	Person107 p2(10); //有参构造函数的调用
	Person107 p3(p2); //拷贝构造函数的调用

	//注意事项
	//调用默认构造函数时，不要加() 
	//Person107 p1(); 编译器认它是一个函数的声明 就像void func(); 不会认为在创建对象

	cout << "p2的年龄为" << p2.age << endl;
	cout << "p3的年龄为" << p3.age << endl;

	cout << "///////////////" << endl;

	//2 显示法
	Person107 p4; //无参/默认构造
	Person107 p5 = Person107(10); //有参构造
	Person107 p6 = Person107(p2); //拷贝构造

	Person107(10); //匿名对象 特点：当前行执行结束后 系统会立即回收掉匿名对象

	//注意事项2 不要利用拷贝构造函数 初始化匿名对象
	//Person107(p6); //p6重定义
	//编译器会认为 Person107(p6) === Person p6 一个对象的声明

	cout << "///////////////" << endl;

	//3 隐式转换法
	Person107 p7 = 10; //相当于写了 Person107 p7 = Person(10); 有参构造
	Person107 p8 = p7;

	cout << "///////////////" << endl;
}

int main107(void)
{
	test10701();

	return 0;
}

