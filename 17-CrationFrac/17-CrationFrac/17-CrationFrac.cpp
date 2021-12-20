// 17-CrationFrac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CRational.h"
using namespace std;

void CRational::summa(int b) {
		CRational c;
		c.num=num*b.denom+denom*b.num;
		c.denom=denom*b.denom;
		c.reduction();
		return c;
	}

CRational CRational::proizvedenie(int b) {
		CRational c;
		c.num=num*b.num;
		c.denom=denom*b.denom;
		c.reduction();
		return c;
	}

void CRational::print(){
		reduction();
		if (num == 0)
			cout<< 0 << endl;
		else if (num >= denom && num % denom==0 )
			cout << num / denom << endl;
		else if (num>=denom && num % denom!=0)
			cout << num / denom << "*" << num % denom << "/" << denom << endl;
		else
			cout << num << "/" << denom << endl;
	}

void CRational::reduction(){
	int i;
	for (i = min( num, denom );i >= 2;i--)
	{	
		if (num % i==0 && denom % i == 0 ) {
			num = num / i;
			denom = denom / i;
		}
	}
} 