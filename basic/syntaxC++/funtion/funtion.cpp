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
//
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//float circleArea(float r);
//const float Pi = 3.14;
//
//int main() {
//	float r;
//	cout << "enter value r:";
//	cin >> r;
//	float result = circleArea(r);
//	cout << "result s:" << result;
//}
//
//float circleArea(float r) {
//	float s;
//	s = Pi* pow( r,2);
//	return s;
//}

//---------------------------------------
// Time conversion function

//#include <iostream>
//#define MAX 60;
//
//using namespace std;
//int timeConversionFuntion(int second);
//
//int main() {
//	int second;
//	cout << "enter second you want conversion: ";
//	cin >> second;
//	int result = timeConversionFuntion(second);
//	return 0;
//}
//
//int timeConversionFuntion(int second) {
//	int hours;
//	int minute;
//	minute = second / MAX;
//	hours = minute / MAX;
//	cout << hours << "hour, " << minute << "minute, " << second << "second";
//	return 0;
//}

//------------------------------------------------
//
//#include <iostream>
//
//using namespace std;
//int Pltg(double a, double b, double c);
//
//int main() {
//	double a, b, c;
//	cout << "enter value a: ";
//	cin >> a;
//	cout << "enter value b: ";
//	cin >> b;
//	cout << "enter value c: ";
//	cin >> c;
//	int result = Pltg(a, b, c);
//	cout << result;
//	return result;
//}
//
//int Pltg(double a, double b, double c) {
//	int Kq = 0;//Khong la tam giac
//	if (a + b > c && a + c > b && b + c > a) // La tam giac
//	{
//		if (a == b && b == c) {// Tam giac deu
//			Kq = 1;
//		}
//		else { // Khong la tg deu
//			if (a == b || b == c || a == c) // Tg can
//			{ // Tg vuong
//				if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
//				{
//					Kq = 4;
//				}
//				else { // Khong vuong
//					Kq = 2;
//				}
//			}
//			else // Khong can
//				if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
//				{
//					Kq = 3;
//				}// Tg vuong
//				else // Khong vuong
//				{
//					Kq = 5;
//				}
//		}
//	}
//	return Kq;
//}

//------------------------------------
//

//#include <iostream>
//
//using namespace std;
//int SoNgay(int thang, int nam);
//
//int main() {
//	double month, year;
//	cout << "enter value month: ";
//	cin >> month;
//	cout << "enter value year: ";
//	cin >> year;
//	int result = SoNgay(month, year);
//	cout << "so ngay:" << result;
//	return result;
//}
//
//int SoNgay(int thang, int nam)
//{
//	int So_Ngay, nhuan;
//	switch (thang)
//	{
//		// tháng bằng: 1,3,5,7,8,10,12
//	case 1:
//		So_Ngay = 31;
//		break;
//	case 3:
//		So_Ngay = 31;
//		break;
//	case 5:
//		So_Ngay = 31;
//		break;
//	case 7:
//		So_Ngay = 31;
//		break;
//	case 8:
//		So_Ngay = 31;
//		break;
//	case 10:
//		So_Ngay = 31;
//		break;
//	case 12:
//		So_Ngay = 31;
//		break;
//		// Các tháng bằng: 4,6,9,11
//	case 4:
//		So_Ngay = 30;
//		break;
//	case 6:
//		So_Ngay = 30;
//		break;
//	case 9:
//		So_Ngay = 30;
//		break;
//	case 11:
//		So_Ngay = 30;
//		break;
//		//Thang 2
//	case 2:
//		nhuan = ((nam % 4 == 0) && (nam % 100 != 0)) ||
//			(nam % 400 == 0);
//		if (nhuan)
//			So_Ngay = 29;
//		else
//			So_Ngay = 28;
//	}
//	return So_Ngay;
//}

//-------------------------------------------------------


//#include <iostream>
//
//using namespace std;
//void ThongKe(int n);
//
//int main() {
//	int n;
//	cout << "enter value n: ";
//	cin >> n;
//	ThongKe(n);
//	//cout << ThongKe;
//	
//}
//void ThongKe(int n)
//{
//	int x, //Diem doc vao tu ban phim
//		d0 = 0, //so diem 0
//		d1 = 0,
//		d2 = 0,
//		d3 = 0,
//		d4 = 0,
//		d5 = 0,
//		d6 = 0,
//		d7 = 0,
//		d8 = 0,
//		d9 = 0,
//		d10 = 0;
//	int i;
//
//	for (i = 1; i <= n; i++)
//	{
//		cout << "\nNhap x = ";
//		cin >> x;
//		switch (x)
//		{
//		case 10: d10++;
//		case 9: d9++;
//		case 8: d8++;
//		case 7: d7++;
//		case 6: d6++;
//		case 5: d5++;
//		case 4: d4++;
//		case 3: d3++;
//		case 2: d2++;
//		case 1: d1++;
//		case 0: d0++;
//		}
//	}
//	cout << "\nSo diem >= 0: " << d0;
//	cout << "\nSo diem >= 1: " << d1;
//	cout << "\nSo diem >= 2: " << d2;
//	cout << "\nSo diem >= 3: " << d3;
//	cout << "\nSo diem >= 4: " << d4;
//	cout << "\nSo diem >= 5: " << d5;
//	cout << "\nSo diem >= 6: " << d6;
//	cout << "\nSo diem >= 7: " << d7;
//	cout << "\nSo diem >= 8: " << d8;
//	cout << "\nSo diem >= 9: " << d9;
//	cout << "\nSo diem >= 10:" << d10;
//}

//----------------------------------------
// Calculate the average value of non-negative numbers among n real numbers read into the word keyboard.

#include <iostream>

using namespace std;
double Gttb(int n);

int main() {
	int n;
	cout << "enter value n: ";
	cin >> n;
	int result = Gttb(n);
	cout << "output: " << result;
	return result;
}
double Gttb(int n)
{
	int i, dem;
	double x, Ttb, sum;
	dem = 0;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		cout << "\nNhap x: x = "; cin >> x;
		if (x < 0)
			continue; //Bỏ qua các câu lệnh sau
		sum += x;
		dem++;
	}
	if (dem == 0)
		Ttb = 0;
	else
		Ttb = sum / dem;
	return Ttb;
}

