#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "Enter the string:\n";
	char string[50], copyofstr[50];
    int i;

    gets (string);

    for(i = 0; i < strlen(string); i++){
        copyofstr[i] = string[i];
		cout << copyofstr[i];
	}
    cout << "\n";

    return 0;
}