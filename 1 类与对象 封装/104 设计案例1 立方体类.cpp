#include <iostream>

using namespace std;

class Cube
{
public:
	//行为
	//设置获取长宽高
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}

	//获取面积 体积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//分别用成员函数与全局函数判断两个立方体是否相等
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
		{
			return true;
		}
		return false;
	}

private:
	//属性
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) //引用的方式传递数据 数据不用再拷贝一份 用原始的数据 更简单
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}
	return false;
}

int main104()
{
	Cube c1;

	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1面积为" << c1.calculateS() << endl;
	cout << "c1体积为" << c1.calculateV() << endl;

	Cube c2;

	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2); //利用全局函数判断
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}

	ret = c1.isSameByClass(c2); //利用成员函数判断
	if (ret)
	{
		cout << "成员函数判断c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断c1和c2是不相等的" << endl;
	}

	return 0;
}

