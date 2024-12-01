#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

//class Point
//{
//public:
//	//设置获取点横坐标纵坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle
//{
//public:
//	//设置获取半径和圆心
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//	Point m_Center;
//};

//判断点和圆关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间距离的平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
}

int main105()
{
	Circle c;
	c.setR(10);
	
    Point center;
	center.setX(10);
	center.setY(0);

	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);

	return 0;
}

