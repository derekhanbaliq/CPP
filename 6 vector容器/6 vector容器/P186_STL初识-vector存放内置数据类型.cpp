#include <iostream>
#include <vector>
#include <algorithm> //��׼�㷨ͷ�ļ�

using namespace std;

void test18601()
{
	// ������һ��vector���� ����
	vector<int> v;

	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin(); // ��ʼ������ ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end(); // ���������� ָ�����������һ��Ԫ�ص���һ��λ��

	// ��һ�ֱ�����ʽ
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl; //�ѵ���������ָ�� ������
		itBegin++;
	}
}

void test18602()
{
	// ������һ��vector���� ����
	vector<int> v;

	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// �ڶ��ֱ�����ʽ
	for(vector<int>::iterator it = v.begin(); it!=v.end(); it++)
	{
		cout << *it << endl; //�ѵ���������ָ�� ������
	}
}

void myPrint(int val)
{
	cout << val << endl;
}

void test18603()
{
	// ������һ��vector���� ����
	vector<int> v;

	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// �����ֱ�����ʽ ����STL���ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}

int main186()
{
	//test18601();
	//test18602();
	test18603();

	return 0;
}