// 17-CrationFrac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <cmath>
 
using namespace std;

class CRational {
	public:
		int num1, denom1, num2, denom2, numSum, denomSum, denomPr, numPr;  //num - numerator(chislitel), deno, - denominator(znamenatel)
        CRational (int _chi,int _zna, int _chi1, int _zna1) : num1(_chi), denom1(_zna), num2(_chi1), denom2(_zna1){}
		void print(){
			if(denom1!=0)
			cout << "First ";
			printdrob(num1,denom1);
			if(denom2!=0)
			cout << "Second ";
			printdrob(num2,denom2);
		}
		void printdrob(int ch,int zn){
			int i;
			if(zn!=0){
			for (i=zn;i>1;i--){
				if((ch % i==0)&&(zn % i==0)){
					ch=ch/i;
					zn=zn/i;}
			}
			if((ch==0)&&(zn!=0))
				cout << "Fraction looks like: " << ch << endl;
			else if (abs(ch/zn)<1)
				cout << "Fraction looks like: " << ch << "/" << zn << endl;
			else if (ch % zn) cout << "Fraction looks like: " << ch / zn << " " << abs(ch % zn) << "/" << abs(zn) << endl;
			else cout << "Fraction looks like: " << ch/zn << endl;
			}
			else cout << "Denominator can't be a null" <<endl;
		}
		void summa(){
			if((denom1!=0) && (denom2!=0)){
				if(denom1!=denom2){
			denomSum=denom1*denom2;
			numSum=num1*denom2+num2*denom1;}
				else {denomSum=denom1;
				numSum=num1+num2;}
				cout << "After summation we have ";
				printdrob(numSum,denomSum);}}
		void proizvedenie(){
			if((denom1!=0) && (denom2!=0)){
			denomSum=denom1*denom2;
			numSum=num1*num2;}
				cout << "After multiplication we have ";
				printdrob(numSum,denomSum);}
};



int main() {
        SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int ch1,zn1,ch2,zn2;
		cout << "Enter the numerator of 1st fraction:" << endl;
		cin >> ch1;
		cout << "Enter the denominator of 1st fraction:" << endl;
		cin >> zn1;
		cout << "Enter the numerator of 2nd fraction:" << endl;
		cin >> ch2;
		cout << "Enter the denominator of 2nd fraction:" << endl;
		cin >> zn2;
		CRational drob (ch1,zn1,ch2,zn2);
		drob.print();
		drob.summa();
		drob.proizvedenie();
		cin.get();
		cin.get();
return 0;}
