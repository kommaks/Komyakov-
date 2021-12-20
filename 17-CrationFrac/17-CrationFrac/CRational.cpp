#include "stdafx.h"
#include <iostream>
#include "CRational.h"
using namespace std;

int main(){
	int num1,denom1,num2,denom2;
	cout << "Enter two fractions" << endl;
	cin >> num1 >> denom1 >> num2 >> denom2;
	if (denom1==0 || denom2==0)
	{
		cout << "Enter two fractions with non-zeroes denominators" << endl;
		cin >> num1 >> denom1 >> num2 >> denom2;
	}
	CRational numb1(num1, denom1),numb2(num2, denom2),SummaOfFractions,ProizvedenieOfFractions;
	SummaOfFractions=numb1.summa(numb2);
	ProizvedenieOfFractions=numb1.proizvedenie(numb2);
	SummaOfFractions.print();
	ProizvedenieOfFractions.print();
	return 0;
 }