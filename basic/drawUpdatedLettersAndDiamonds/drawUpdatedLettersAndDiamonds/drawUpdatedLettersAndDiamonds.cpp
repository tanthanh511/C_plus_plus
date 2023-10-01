#include <iostream>
using namespace std;

int main()
{
	// ch? nh?t ??c ru?t 
	int h, w;
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	int i, j;
	for (int i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	// ch? nh?t r?ng
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			if (i == 0 || i == w - 1 || j == 0 || j == h - 1) {
				cout << ("*");
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}

	cout << "\n";

	// hình thoi
	int n;
	cout << "enter number :";
	cin >> n;
	n = (n / 2) * 2 + 1;//cho n luon la so le
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (j - 1 != n / 2 - i + 1 && i + n / 2 != j && i != j + n / 2 && j - n / 2 != n - i + 1) {
				cout << (" "); 
			}
			else { 
				cout << ("*"); 
			}
		cout<<("\n");
	}
}
