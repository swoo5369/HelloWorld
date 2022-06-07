#pragma once
#include <iostream>

const double PI = 3.141592;

struct C2dType // Circle 2D type : 2D����ǥ
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
public://��� ������ ������ �� ����
	//-->
	CircleClass();//������ ����ڴٴ� ȣ��
	~CircleClass();//�ı��� ���شٴ� ȣ��

	double circleArea(); //���� ���ϱ� ���
	double getDistance(CircleType target); //target���� �Ÿ� ���ϱ� ���
	bool IsOverlapped(CircleType target); //target�� ������ �Ǿ��ִ��� üũ�ϴ� ���

	CircleType circle;
 
	//<--public����
private://�ٸ� ������ ������ �� ����
	//-->

	//<--private����
protected://�ڽı����� ������ �� ����
	//-->

	//<--protected����
public://��� ������ ������ �� ����
	//-->

	//<--public����
};
