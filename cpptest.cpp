#include <iostream>
#include <string>

#define PI 3.14

using namespace std;

class Circle
{
//公共权限 
public:
	
	//属性 
	int m_r;
	
	//行为 
	double calculateC()
	{
		double C;
		C = 2 * PI * m_r;
		return C;
	}
	
};

int main()
{
	string a;
	int x, y;
	x=1;
	y=2;
	Circle c1; //通过类创建具体的对象--圆，实例化对象 
	double zc;
	
	// cin & cout 
	cout << "hello world!" << endl;
	cin >> a;
	cout << "a=" << a << endl;
	
	//引用
	swap(x, y);
	cout << "x=" << x << ", y=" << y << endl;
	
	//类
	c1.m_r=2;
	zc=c1.calculateC();
	cout << "周长为" << zc << endl; 
	
	return 0;
}

void swap(int &a1, int &a2)
{
	int temp;
	
	temp = a1;
	a1 = a2;
	a2 = temp;
}
