/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main()
{
	unsigned int x = 2999999999;
	cout << "x = " << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;//257
	someInteger *= 2;//514
	someShort = static_cast<short>(someInteger);//514
	someLong = someShort * 10000;//5140000
	someFloat = someLong + 0.785f;//5140000
	someDouble = static_cast<double>(someFloat) / 100000;//51.4
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;

	cout << "+ \n";

	int secondNum = 0;
	cout << "secondNum : ";
	cin >> secondNum; //cin은 숫자를 입력하는 값

	cout << "= \n";

	cout << firstNum + secondNum << endl;

	const int a = 0; //const는 값 고정
	constexpr int b = fac(4);//expr 실행될때 연산
	int c = fac(4);
}
*/