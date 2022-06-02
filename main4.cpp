/*
#include <iostream>
#include "employeestruct.h"

using namespace std;


enum PieceType1
{
	PieceTypeKing = 1,
	PieceTypeQueen,
	PieceTypeRook = 10,
	PieceTypePawn
};

enum class PieceType : unsigned long
{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main()
{
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;

	PieceType myPiece2 = PieceType::King;
	//int b = myPiece2;// enum class로 지정하면 타입을 변격할 수 없다

	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드레 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << 
		anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	return 0;
}
*/