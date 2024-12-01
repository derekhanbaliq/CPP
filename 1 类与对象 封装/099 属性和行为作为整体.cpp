#include <iostream>

using namespace std;

#define PI 3.14

class Circle
{
public:  //访问权限 公共权限
	
	//属性
	int m_r; //半径

	// 行为
	double CalculateZC()  //获取圆的周长
	{
		return 2 * PI * m_r;
	}
};

int main099()
{
	Circle c1;  //通过圆类，创建圆的对象，c1就是一个具体的圆

	c1.m_r = 10;  //给圆/对象的属性进行赋值

	cout << "圆的周长为 " << c1.CalculateZC() << endl;
	
	return 0;
}

