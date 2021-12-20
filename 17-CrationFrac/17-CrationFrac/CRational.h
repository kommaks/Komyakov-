#include "stdafx.h"
#include <iostream>

class CRational
{
	int num; 
	int	denom;  //num - numerator(chislitel), denom, - denominator(znamenatel)
public:
        CRational (int _chi = 0,int _zna = 1) : num(_chi), denom(_zna){}
	void print();
	void reduction();
	CRational summa(CRational b);
	CRational proizvedenie(CRational b);
			
};