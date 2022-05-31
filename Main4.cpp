#include <iostream>
#include "employeestruct.h"

using namespace std;

enum PieceType1 { 
	PieceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook = 10, 
	PieceTypePawn 
}; //���� �ڿ������� 2, ���� 11�� �ȴ� 

enum class PieceType : unsigned long {
	King = 1,
	Queen, 
	Rook = 10, 
	Pawn 
};

PieceType1 myPiece = PieceTypeRook;
int a = myPiece;

PieceType myPiece2 = PieceType::King; 
//int b = myPiece2; Enum Class�� Ÿ���� ������ �� ����.

int main()
{ 
	//���� ���ڵ� ���� �� �� ä���
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
