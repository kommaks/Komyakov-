#include "FIFO_LIFO.h"
#include <iostream>

using namespace std;

Fifo::Fifo(int N) 
{
	length = N;
	queue = new int[length];
}

Fifo::~Fifo() 
{
	delete[] queue;
}

void Fifo::push(int numb, int count)
{
	length = count;

    if (length == 1)
	   queue[0] = numb;
	else
	{
		for(int i = 1; i < length; ++i)
			queue[length - i] = queue[length - i - 1];
	        
		queue[0] = numb;
	}
}

void Fifo::check()
{
	if (length == 0)
	    cout << "You have empty container. \n\n";
	else
	{
	   int m = 0;
	   
	   cout << "Currently in your container are: ";
	   
	   while (m < length)
	   {
	       cout << queue[m] <<" ";
		   ++m;
	   } 
	   
	   cout << "\n\n"; 
	}
}
	
void Fifo::popFIFO()
{
    cout << "'" << queue [length - 1] << "'" << " is getting out first \n" ;
    --length;
}

Lifo::Lifo(int N) 
{
	length = N;
	queue = new int[length];
}

Lifo::~Lifo() 
{
	delete[] queue;
}

void Lifo::push(int numb, int count)
{
	length = count;

    if (length == 1)
	   queue[0] = numb;
	else
	{
		for(int i = 1; i < length; ++i)
			queue[length - i] = queue[length - i - 1];
	        
		queue[0] = numb;
	}
}

void Lifo::check()
{
	if (length == 0)
	    cout << "You have empty container. \n\n";
	else
	{
	   int m = 0;
	   
	   cout << "Currently in your container are: ";
	   
	   while (m < length)
	   {
	       cout << queue[m] <<" ";
		   ++m;
	   } 
	   
	   cout << "\n\n"; 
	}
}

void Lifo::popLIFO()
{
    cout << "'" << queue[0] << "'" << " is getting out \n" ;

	int k = 0;
	while (k < length - 1)
	{
		queue[k] = queue[k + 1];
		++k;
	}
	
	--length;
}