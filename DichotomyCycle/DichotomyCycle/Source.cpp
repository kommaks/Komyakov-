#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std; 

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

int state, k, sred, a = 0, b = 100;
	cout << "Загадайте число от 0 до 100" << endl;
	sred = (a + b) / 2;
	for (k = 0; sred > 0 && sred < 100; )
	{
		cout << "Данное число меньше(напишите -1), больше(1) или равно(0)  " << sred << " ?" << endl;
		cin >> state;
		if ( state == -1 )
			b = sred;
		if ( state == 1 )
			a = sred;
		if ( state == 0 )
			{
				cout << "Ваше число - " << sred << endl;
				break;
			}
	sred = (a + b) / 2;
	}
}
