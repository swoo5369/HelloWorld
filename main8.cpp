#include <iostream>

using namespace std;

int main()
{
	/*
	int Score = { 0 };
	cin >> Score;

	
	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > Score && Score >= 70)
	{
		cout << "C" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "D" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	Score /= 10;

	switch (Score)
	{
	case 10:
		[[fallthrough]]
	case 9:
		cout << "A" << endl;	
		break;
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}

	int a, b = { 0 };

	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	bool result = (a - b > 0);

	switch (result)
	{
	case true:
		cout << "true" << endl;
		break;
	default:
		cout << "false" << endl;
	 break;
		
	}
	

	int a, b, c = { 0 };

	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	bool result = (a + b > c)

	switch (result)
	{
	case true:
		cout << "a + b =" << a + b << endl;
		break;
	default:
		cout << "c = " << c << endl;
		break;
	}

	int a  = { 0 };

	cout << "1, 2, 3, 4 중 숫자 하나를 입력?" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Red" << endl;
		break;
	case 2:
		cout << "Blue" << endl;
		break;
	case 3:
		cout << "Black" << endl;
		break;
	case 4:
		cout << "White" << endl;
		break;
	}
	*/
	
	int a = { 0 };

	cout << "주민번호 뒤 7자리를 입력?" << endl;

	cin >> a;
	a /= 1000000;

	switch (a)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "남자" << endl;
		break;
	case 2:
		__fallthrough;
	case 4:
		cout << "여자" << endl;
		break;
	default:
		cout << "외계인" << endl;
		break;
	}



}



