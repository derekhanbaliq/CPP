#include <iostream>

using namespace std;

class AbsDrink
{
public:

	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void Pour() = 0;
	virtual void AddSth() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		Pour();
		AddSth();
	}
};

class Coffee : public AbsDrink
{
public:
	
	virtual void Boil()
	{
		cout << "Boiling nfsq" << endl;
	}

	virtual void Brew()
	{
		cout << " Brewing coffee" << endl;
	}

	virtual void Pour()
	{
		cout << "Pouring into coffee machine" << endl;
	}

	virtual void AddSth()
	{
		cout << "Add sugar and milk" << endl;
	}

};

class Tea : public AbsDrink
{
public:

	virtual void Boil()
	{
		cout << "Boiling sparkling" << endl;
	}

	virtual void Brew()
	{
		cout << "Brewing tea" << endl;
	}

	virtual void Pour()
	{
		cout << "Pouring into tea pot" << endl;
	}

	virtual void AddSth()
	{
		cout << "Add gouqi" << endl;
	}
};

void doDrink(AbsDrink& abs)
{
	abs.makeDrink();
}

void test13901()
{
	Coffee c;

	doDrink(c);
}

void test13902()
{
	Tea t;

	doDrink(t);
}

int main139()
{
	test13901();
	test13902();

	return 0;
}

