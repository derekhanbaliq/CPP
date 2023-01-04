#include <iostream>
#include <string.h>
#include "MyArray.hpp"

using namespace std;

void test15_1()
{
	MyArray<int> arr1(5);

	MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;
}

void printIntArray(MyArray<int> & arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test15_2()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为：" << endl;

	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2的打印输出为：" << endl;
	printIntArray(arr2);

	//尾删
	cout << "arr2的尾删" << endl;
	arr2.Pop_Back();
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
}

//测试自定义的数据类型
class Person15
{
public:

	Person15() {};

	Person15(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	~Person15() {};

	string m_Name;
	int m_Age;
};

void printPersonArr(MyArray<Person15>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}

void test15_3()
{
	MyArray<Person15> arr(10);

	Person15 p1("孙悟空", 999);
	Person15 p2("韩信", 30);
	Person15 p3("妲己", 20);
	Person15 p4("赵云", 25);
	Person15 p5("安琪拉", 27);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPersonArr(arr);

	//输出容量和大小
	cout << "arr的容量为：" << arr.getCapacity() << endl;
	cout << "arr的大小为：" << arr.getSize() << endl;

}

int main(void)
{
	test15_1();
	cout << "----" << endl;

	test15_2();
	cout << "----" << endl;

	test15_3();
	cout << "----" << endl;

	return 0;
}