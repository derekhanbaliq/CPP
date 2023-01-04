#include <iostream>

using namespace std;

//this指针的用途
//1 解决名称冲突
//2 返回对象本身用*this


class Person115
{
public:

	Person115(int age)
	{
		//this指针指向的事被调用的成员函数所属的对象
		this->age = age;
	}
	
	Person115& PersonAddAge(Person115 &p) //引用返回 返回的不是新对象 而一直是p2
	{
		this->age += p.age;
		return *this; //this 指向p2的指针 *this指向的就是p2这个对象的本体
	}

	int age;
};

//1 解决名称冲突
void test11501()
{
	Person115 p1(18);
	cout << "p1的年龄" << p1.age << endl;
}

void test11502()
{
	Person115 p1(10);
	Person115 p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄" << p2.age << endl;

}

int main115()
{
	test11501();
	test11502();

	return 0;
}

