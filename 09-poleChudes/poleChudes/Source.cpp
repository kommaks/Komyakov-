#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Enter your word: ";
	string word;
	cin >> word;
	int n = word.length();
	string unguessed = word;
	for (int i=0; i<n; i++) {
		unguessed[i] = '_';
	};
	cout << unguessed << "\n";
	do {
		cout << "\nSpin the drum! \nYour letter: ";
		char a;
		cin >> a;
		char letterDefiner ='(';
		for (int i=0; i<n; i++) {
			if (a == word[i]) {
				letterDefiner = a;
				unguessed[i] = a;
			};
		};
		if (letterDefiner != '(') {
			cout << "You are right!"<< "\n";
			cout << unguessed << "\n";
		}
		else {
			cout << "Wrong letter! Try again..\n";
			cout << unguessed << "\n";
		}
	} while (word != unguessed);
	cout << "Congratulations. You win!\n";
}