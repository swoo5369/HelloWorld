#pragma once
#include <iostream>

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

class CircleClass
{
public://모든 곳에서 접근할 수 있음
	//-->
	CircleClass();//생성자 만들겠다는 호출
	~CircleClass();//파괴자 없앤다는 호출

	double circleArea(); //면적 구하기 기능
	double getDistance(CircleType target); //target과의 거리 구하기 기능
	bool IsOverlapped(CircleType target); //target과 오버랩 되어있는지 체크하는 기능

	CircleType circle;
 
	//<--public영역
private://다른 곳에서 접근할 수 없음
	//-->

	//<--private영역
protected://자식까지는 접근할 수 있음
	//-->

	//<--protected영역
public://모든 곳에서 접근할 수 있음
	//-->

	//<--public영역
};
