#include <iostream>
using namespace std;
void menu();
int chonMenu();
void xuatMenu(int n, int chon);


int main()
{
    int chon, n;
    cout << "nhap n: ";
    cin >> n;
    do {
        chon = chonMenu();
        xuatMenu(n, chon);
    } while (1);
  
}

void menu() {
    cout << "Bang menu\n";
    cout << "1. Chuc nang 1\n";
    cout << "2. Chuc nang 2\n";
    cout << "3. Chuc nang 3\n";
    cout << "4. thoat\n";
}

int chonMenu() {
    int chon;
    for (;;) {
        menu();
        cout << "nhap tu 1 - 4: ";
        cin >> chon;
        if (1 <= chon && chon <= 4) {
            break;
        } 
    }
    return chon;
}

void xuatMenu(int n, int chon) {
    switch (chon)
    {
    case 1: 
        cout << "hihi";
        break;
    case 2:
        cout << "hihi";
        break;
    case 3:
        cout << "hihi";
        break;
    case 4:
        exit(1);
    }
}

