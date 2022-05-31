/*
#include <iostream>//iostream 입출력 스트림


//main은 프로그램 시작
int main(int argc, char* argv[])
{
	//초기화 방법 필수!
	int value1 = 0; //정수 signed가 기본값
	int a1(0);
	int a2 = { 0 };//최신
	int a3{ 0 }; //최신
	
	value1 = 0b1001011;//2진법 표기법
	value1 = 0123;//8진법
	value1 = 0x9f;//16진법

	signed int value2 = 0; //음수 가능
	unsigned int value3; //음수 불가능
	float value4; // 소수점 가능
	char c1 = 'A'; // 문자하나 ''는 문자 하나라는 표시
	c1 = '\101'; //10진법 유니코드 'A'
	c1 = '\x41'; //16진법 유니코드 'A'

	//std::cin >> c1;

	//std 텍스트 표시
	std::cout << "Hello, World!" << std::endl;

	//이건 주석
	
	std::cout << "There are " << c1 << " Ways\nI love you." << std::endl;
	
	std::cout << "A\nBC\nDEF\nGH" << std::endl;
	
}
*/