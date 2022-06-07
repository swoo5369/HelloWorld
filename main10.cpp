#include <iostream>
#include "employeestruct.h"

using namespace std;

const double PI = 3.141592;

struct C2dType // Circle 2D type : 2D원좌표
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
	//반지름 * 반지름 * PI ----> 원의 넓이 공식
	return c.radius * c.radius * PI;
}

double getDistance(CircleType c1, CircleType c2)
{
	//피타고라스의 정리 : 밑변의 제곱 + 높이의 제곱 = 빗변의 제곱
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : 제곱근
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
	bool blsOverlapped = IsOverlapped(c1, c2);
	cout << "IsOverlapped = " 
		<< boolalpha << blsOverlapped << noboolalpha << endl;

	Employee aaa;
}