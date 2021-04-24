#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int massive[1];
int massivemassivity = 0, allmassive = 0, result = 0;
void MidArif(int Number1, int Number2)
{
	int massiveraz = Number2 - Number1;
	for (int i = Number1; i <= Number2; i++)
	{
		massive[i] = i;
		massivemassivity += 1;
		allmassive += i;
	}
	result = allmassive / massivemassivity;
	cout <<"Результат: " << result;
}

int main()
{
	int n1, n2;
	setlocale(LC_ALL, "Russian");
	cout << "Начало: ";
	cin >> n1;
	cout << "Конец: ";
	cin >> n2;
	MidArif(n1, n2);
}
