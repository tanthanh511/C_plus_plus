// The function calculates the maximum value of two real numbers

//#include <iostream>
//
//using namespace std;
//double GTLN(double a, double b);
//
//int main()
//{
//	double a=0 , b= 0 ;
//	cout << "enter value a:";
//	cin >> a;
//	cout << "enter value b:";
//	cin >> b;
//	double result = GTLN(a, b);
//	cout << "return value result: " << result;
//	return 0;
//}
//
//double GTLN(double a, double b) {
//	double Gtln;
//	Gtln = (a > b) ? a : b;
//	return Gtln;
//}

//----------------------------------------------
// Write a function that converts digits to numbers

//#include <iostream>
//
//using namespace std;
//int GTKS_So(char x);
//
//int main()
//{
//	char x;
//	cout << "enter x:";
//	cin >> x;
//	double result = GTKS_So(x);
//	cout << "return value result: " << result;
//	return 0;
//}
//
//int GTKS_So(char x) {
//	int GT_So ;
//	GT_So = x-'0';// x-48
//	return GT_So;
//}

//----------------------------------------------
//function to check odd and even numbers

//#include <iostream>
//
//using namespace std;
//int checkOddAndEvenNumbers(int a);
//
//int main()
//{
//	int input;
//	cout << "enter value:";
//	cin >> input;
//	int result = checkOddAndEvenNumbers(input);
//		
//}
//
//int checkOddAndEvenNumbers(int a) {
//	int result = a % 2;
//	if (result == 0)
//	{
//		cout << "This is even number.";
//	}
//	else {
//		cout << "This is odd number.";
//	}
//	return result;
//}

//----------------------------------------------
//Absolute value function of a number
//
//#include <iostream>
//using namespace std;
//int absoluteValue(int a);
//
//int main() {
//	int input;
//	cout << "enter value:";
//	cin >> input;
//	int result = absoluteValue(input);
//	cout << "request:" << result;
//}
//
//int absoluteValue(int a) {
//	int result = (a >= 0) ? a : -a;
//	return result;
//}

//----------------------------------------------
// Type coercion (ép kiểu dữ liệu)
//#include <iostream>
//using namespace std;
//int absoluteValue(int a);
//
//int main() {
//	char x,y;
//	int p = 3, q = 4;
//	x = (float)p / q;
//	cout << x;
//}

//----------------------------------------------
// Write a program to calculate and output the area of ​​a triangle:
// input: a, b, c for users to enter from the keyboard
// output: DTTG

//#include <iostream>
//#include <math.h>
//
//using namespace std;
//float findP(int a, int b, int c);
//float triangleArea(int a, int b, int c);
//
//int main() {
//	int a, b, c;
//	cout << "Enter value a: ";
//	cin >> a;
//	cout << "Enter value b: ";
//	cin >> b;
//	cout << "Enter value c: ";
//	cin >> c;
//	float result = triangleArea(a, b, c);
//	cout << "result triangle area: " << result;
//}
//
//float findP(int a, int b, int c) {
//	float p;
//	p = (a + b + c) / 2;
//	return p;
//}
//
//float triangleArea(int a, int b, int c) {
//	float S;
//	float p = findP(a, b, c);
//	S = sqrt(p * (p - a) * (p - b) * (p - c));
//	return S;
//}

//------------------------------------------------
// Calculate circle area 

#include <iostream>
#include <math.h>

using namespace std;
float circleArea(float r);
const float Pi = 3.14;

int main() {
	float r;
	cout << "enter value r:";
	cin >> r;
	float result = circleArea(r);
	cout << "result s:" << result;
}

float circleArea(float r) {
	float s;
	s = Pi* pow( r,2);
	return s;
}

