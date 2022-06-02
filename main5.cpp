/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++;
		b = ++a;
		//b = a--;
		//b = --a; 
		cout << "a = " << a << "b = " << b << endl;
	}

	{
		int a = 10;
		int b = -5;
		bool result = false;// bool은 0,1로 표시 boolalpha 는 true, false로 표시
		result = (a > b) ? true : false;
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;//논리곱 앞 뒤 모두 참일때 true
		result = (a > 0 || b > 0) ? true : false;//논리합 앞 뒤 둘중 하나만 참이어도 true
		result = (a > 0 && --b > 0) ? true : false;// 앞의 값이 참이 아닐때 && 뒤의 식을 실행 안함 (축약논리)
		result = !(a > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << " b= " << b << endl;
	}

	{
		int num = 10;
		cout << "2진법 표기 : " << bitset<32>(num) << endl;
		cout << "8진수 표기 : " << oct << num << endl;
		cout << "10진법 표기 : " << dec << num << endl;
		cout << "16진수 표기 :" << hex << num << endl;
		
		int x = 0x35;
		int y = 0xf0;
		cout << "x= " << bitset<8>(x) << endl;
		cout << "y= " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;//배타적 논리합 같으면 0 다르면 1
		cout << "~x = " << bitset<8>(~x) << endl;// 반대로

		int x1 = x << 2;//왼쪽으로 두단계 앞으로 가고 0으로 채움
		cout << "x1= " << bitset<8>(x1) << endl;

		char cX = 0b10010100;//char형은 맨 앞비트가 복사된다
		cout << "cX= " << bitset<8>(cX) << endl;
		cX = cX >> 2;//오른쪽으로 두개 민다
		cout << "cX= " << bitset<8>(cX) << endl;
		//암호화에 사용

		{
			//형 변환
			
			int intVar = 7;
			double doubleVar = 1.5;
			float floatVar = 3.7f;

			intVar = doubleVar;
			floatVar = intVar;

			//자료형 우선 순위 - 사이즈가 크고, 실수인 형태가 우선
			//char -> int -> long -> float -> double -> long double
			intVar = doubleVar + intVar * floatVar;
			//                        float
			//       doubleVar + (intVar * floatVar)
			//              double
			//intVar = (doubleVar + (intVar * floatVar))
			//      int
		}

		{
			//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
			//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그햄 실행 중에 일어나도록 지시함
			//reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함 (잘 안씀)
			//const_cast : const 지정을 일시 해제함 (잘 안씀)
			
			double d = 10.5;
			int a = static_cast<int>(d);
		}
	}
}
*/