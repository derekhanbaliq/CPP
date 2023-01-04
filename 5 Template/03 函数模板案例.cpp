#include <iostream>

using namespace std;

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char数组 int数组

//交换函数模板
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; //认定最大值的下标
		
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j]) //认定的最大值比遍历输出的数值要小 说明j下标的元素才是真正的最大值
			{
				max = j; //更新最大值下标
			}
		}
		
		if (max != i) //交换max和i元素
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
template<class T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test03_1()
{
	char charArr[] = "badcfe";
	int num = sizeof(charArr);

	mySort(charArr, num);

	printArr(charArr, num);
}

void test03_2()
{
	int intArr[] = {7, 5, 1, 3, 9, 2, 4, 6, 8};
	int num = sizeof(intArr) / sizeof(int);

	mySort(intArr, num);

	printArr(intArr, num);
}

int main03(void)
{
	test03_1();
	test03_2();

	return 0;
}