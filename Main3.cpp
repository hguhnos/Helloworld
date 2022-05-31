
/*
#include <iostream>

using namespace std; 

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1; //팩토리얼
}

int main(int argc, char* argv[]) 
{
	unsigned int x = 2999999999; //그냥 int로 하기에는 설정값(범위)이 낮음 
	cout << "x = " << x << endl; 

	int someInteger = 256; 
	short someShort; 
	long someLong; 
	float someFloat; 
	double someDouble; 

	someInteger++; //257
	someInteger *= 2; //514
	someShort = static_cast<short>(someInteger); //514
	someLong = someShort * 10000; //5140000
	someFloat = someLong + 0.758f; //5140000.785
	someDouble = static_cast<double>(someFloat) / 100000; //51.40000785 
	cout << someDouble << endl; //51.4

	int firstNum = 0; 
	cout << "firstNum : ";
	cin >> firstNum; 
	int secondNum = 0; 
	cout << "secondNum : ";
	cin >> secondNum;
	cout << "Sum : ";
	cout << firstNum + secondNum << endl; 

	const int a = 0;
	constexpr int b = fac(4);  
	int c = fac(4);
}
*/