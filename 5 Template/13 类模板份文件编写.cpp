#include <iostream>

//��һ�ֽ����ʽ ֱ�Ӱ���Դ�ļ�
//#include "person13.cpp"

//�ڶ��ֽ����ʽ ��.h��.cpp�е�����д��һ�� ����׺����Ϊ.hpp�ļ�
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