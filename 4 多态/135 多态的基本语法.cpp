#include <iostream>

using namespace std;

class Animal135
{
public:

	virtual void speak135() //虚函数
	{
		cout << "animal is talking" << endl;
	}

};

class Cat135 :public Animal135
{
public:

	void speak135()
	{
		cout << "cat is talking" << endl;
	}

};

class Dog135 :public Animal135
{
public:

	void speak135()
	{
		cout << "dog is talking" << endl;
	}

};

void doSpeak(Animal135 &a) //animal的引用 = cat
{
	a.speak135();
}

void test13501()
{
	Cat135 c;
	doSpeak(c);

	Dog135 d;
	doSpeak(d);
}

int main135()
{
	test13501();

	return 0;
}
