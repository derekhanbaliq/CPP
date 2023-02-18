#include <iostream>
#include <string>

using namespace std;

void test19101() 
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;

	string str2 = ": AOE2 123";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love");
	cout << "str3 = " << str3 << endl;

	str3.append(" game abcde", 5);
	cout << "str3 = " << str3 << endl;

	str3.append(str2);
	cout << "str3 = " << str3 << endl;

	str3.append(str2, 7, 3); // 只截取3个
	cout << "str3 = " << str3 << endl;
}

int main(void)
{
	test19101();

	return 0;
}
