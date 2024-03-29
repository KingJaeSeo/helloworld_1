#include <iostream>
#include "employeestruct.h"

using namespace std;

const double PI = 3.141592;

struct C2dType//Circle 2D Type
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	// ������ * ������ * PI ----> ���� ���� ����
	return c.radius * c.radius * PI;
}

double getDistance(CircleType c1, CircleType c2)
{
	// ��Ÿ������ ���� : �غ��� ���� + ���̿� ���� = ������ ����
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : ������
	return dCntr;
}

bool IsOverlapped(CircleType c1, CircleType c2)
{
	double distance = getDistance(c1, c2);
	return (distance < c1.radius + c2.radius);
}

int main()
{
	CircleType c1, c2;
	c1.center.x = 10;
	c1.center.y = 10;
	c1.radius = 10;

	c2.center.x = 30;
	c2.center.y = 30;
	c2.radius = 10;
	bool bIsOverlapped = IsOverlapped(c1, c2);
	cout << "IsOverlapped = "
		<< boolalpha << bIsOverlapped << noboolalpha << endl;

	Employee aaa;
}