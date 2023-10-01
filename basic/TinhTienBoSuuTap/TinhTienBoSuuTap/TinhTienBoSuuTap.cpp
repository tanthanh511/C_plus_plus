#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int nickel, penney, giatrixu, dola, xule;
	cout << "Enter the amount nickey: ";
	cin >> nickel;
	cout << "Enter the amount penney: ";
	cin >> penney;
	// sum 

	giatrixu = 5 * nickel + penney;

	dola = giatrixu / 100;
	xule = giatrixu % 100;
	cout << "bo suu tap có gia tri la: " << dola << " dola và " << xule << " xu le.";

}

