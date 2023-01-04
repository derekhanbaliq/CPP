#include <iostream>

//第一种解决方式 直接包含源文件
//#include "person13.cpp"

//第二种解决方式 将.h和.cpp中的内容写到一起 将后缀名改为.hpp文件
#include "person13.hpp"

using namespace std;

void test13()
{
	Person13<string, int> p("Jerry", 18);
	p.showPerson13();
}

int main13(void)
{
	test13();

	return 0;
}