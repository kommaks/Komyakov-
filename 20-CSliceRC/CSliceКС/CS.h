#ifndef CSLISE_H
#define CSLICE_H
#include<iostream>

using namespace std;

class Slice
{
private:
	int start, stop, step, flag, N;
	int *array;
	int flag1, flag2, flag3;
public:
	Slice();

	~Slice();

	void parsingMaster();

	void obj();
};
#endif