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
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;

	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);

	//βɾ
	cout << "arr2��βɾ" << endl;
	arr2.Pop_Back();
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}

//�����Զ������������
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
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

void test15_3()
{
	MyArray<Person15> arr(10);

	Person15 p1("�����", 999);
	Person15 p2("����", 30);
	Person15 p3("槼�", 20);
	Person15 p4("����", 25);
	Person15 p5("������", 27);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArr(arr);

	//��������ʹ�С
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;

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