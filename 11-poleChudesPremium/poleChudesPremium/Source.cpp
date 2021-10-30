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
		string a;
		cin >> a;
		int l = a.length();
		string letterDefiner ="(";
		if (l > 1) {
			if (a == word) {
				unguessed = word;
			}
			else {
				cout << "Unfortunately, you didn't guess. You lost.\n";
			}
			break;
		}
		for (int i=0; i<n; i++) {
			if (a[0] == word[i] & unguessed[i] == '_') {
				letterDefiner = a[0];
				unguessed[i] = a[0];
			};
		};
		if (letterDefiner != "(") {
			cout << "You are right!"<< "\n";
			cout << unguessed << "\n";
		}
		else {
			cout << "This is wrong letter or you already entered it. Try again..\n";
			cout << unguessed << "\n";
		}
	} while (word != unguessed);
	if (word == unguessed) {
	cout << "\nCongratulations. You win!\nThis word is: " << word << "\n";
	}
}