#include <iostream>
#include "employeestruct.h"

using namespace std;

enum PieceType1 { 
	PieceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook = 10, 
	PieceTypePawn 
}; //퀸은 자연스럽게 2, 폰은 11이 된다 

enum class PieceType : unsigned long {
	King = 1,
	Queen, 
	Rook = 10, 
	Pawn 
};

PieceType1 myPiece = PieceTypeRook;
int a = myPiece;

PieceType myPiece2 = PieceType::King; 
//int b = myPiece2; Enum Class는 타입을 변경할 수 없다.

int main()
{ 
	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	cout << "Employee: " << anEmployee.firstInitial <<
		anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl; 
}
