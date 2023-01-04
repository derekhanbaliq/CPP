#include <iostream>

using namespace std;

#define PI 3.14

class Circle
{
	//访问权限
public: //公共权限
	
	//属性
	int m_r;

	//行为
	double CalculateZC()//获取圆的周长
	{
		return 2 * PI * m_r;
	}
};

int main099()
{
	//创建具体的圆/对象 -- 实例化：通过一个类 创建一个对象的过程
	Circle c1;

	//给圆/对象的属性进行赋值
	c1.m_r = 10;

	cout << "圆的周长为" << c1.CalculateZC() << endl;
	
	return 0;
}

