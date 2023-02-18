#include <iostream>
#include <string>

using namespace std;

void test18901()
{
	string s1; // Ä¬ÈÏ¹¹Ôì

	const char* str = "hello world";
	string s2(str);

	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int main189(void)
{
	test18901();

	return 0;
}