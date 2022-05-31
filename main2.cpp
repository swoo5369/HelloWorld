/*
#include <iostream>

using namespace std;//함수에서 std를 빼도 됨

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30; //전역변수

int main(int argc, char* argv[]){
	
	int n = 40; //지역변수

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl;
	cout << n << endl;

	float myFloat = 3.14f;
	int i1 = (int)myFloat;//비추
	int i2 = int(myFloat);//비추
	int i3 = static_cast<int>(myFloat);//정확한 형변환 방법

	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; // 12 * (10^2)
	double d4 = 1.2e+3; // 1.2 * (10^3)

	cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << endl;
}
*/