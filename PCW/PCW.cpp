#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int a, x, b, c;
void LinUr()
{
	x = -b / a;
	cout << x << endl;
}
void KLinUr()
{
	x = -(c / b);
	cout << x << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	LinUr();
	KLinUr();
}