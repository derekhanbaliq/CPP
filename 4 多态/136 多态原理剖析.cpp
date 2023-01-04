#include <iostream>

using namespace std;

class Animal136
{
public:

	virtual void speak136() //虚函数
	{
		cout << "animal is talking" << endl;
	}

};

class Cat136 :public Animal136
{
public:

	void speak136()
	{
		cout << "cat is talking" << endl;
	}

};

class Dog136 :public Animal136
{
public:

	void speak136()
	{
		cout << "dog is talking" << endl;
	}

};

void doSpeak(Animal136& a) //animal的引用 = cat
{
	a.speak136();
}

void test13601()
{
	Cat136 c;
	doSpeak(c);

	Dog136 d;
	doSpeak(d);
}

void test13602()
{
	cout << "size of Animal = " << sizeof(Animal136) << endl;
}

int main136()
{
	test13601();
	test13602();

	return 0;
}
