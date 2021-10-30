//#include <iostream>
//#include <string>
//#include <locale.h>
///using namespace std;
//
//int main() 
//{


//    cout << "Введите ваше имя:";
//	string ИМЯ;
//	cin >> ИМЯ;
//	cout << "Привет," << ИМЯ << "! \n";
//   return 0;
//}
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
    char yourname[45];
    cout << "Введите ваше имя: \n";
    gets( yourname );
    cout << "Привет, " << yourname << "!\n";

    return 0;
}
