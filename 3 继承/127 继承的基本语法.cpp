#include <iostream>

using namespace std;

class BasePage
{
public:
	void header()
	{
		cout << "header" << endl;
	}
	void footer()
	{
		cout << "footer" << endl;
	}
	void left()
	{
		cout << "left" << endl;
	}
};

class Java : public BasePage
{
public:
	void content()
	{
		"java สำฦต";
	}
};

class Python : public BasePage
{
public:
	void content()
	{
		"python สำฦต";
	}
};

class Cpp : public BasePage
{
public:
	void content()
	{
		cout << "cpp video" << endl;
	}
};

void test12701()
{
	Java jv;
	Python py;
	Cpp cpp;

	jv.footer();
	py.header();
	cpp.left();

	cpp.content();
}

int main127()
{
	test12701();

	return 0;
}