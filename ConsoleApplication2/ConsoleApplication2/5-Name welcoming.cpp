//#include <iostream>
//#include <string>
//#include <locale.h>
///using namespace std;
//
//int main() 
//{


//    cout << "������� ���� ���:";
//	string ���;
//	cin >> ���;
//	cout << "������," << ��� << "! \n";
//   return 0;
//}
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
    char yourname[45];
    cout << "������� ���� ���: \n";
    gets( yourname );
    cout << "������, " << yourname << "!\n";

    return 0;
}
