#include <string>
#include "CS.h"
using namespace std;

Slice::Slice()
{
	start = 0, stop = 0, step = 0;
	int N1 = 0;
	flag1 = 0, flag2 = 0, flag3 = 0;
	flag = 0;
	cout << "Enter a number of elements in massive: ";
	cin >> N1;
	N = N1;
	array = new int[N1];
	for (int i = 0; i < N1; i++)
	{
		cin >> array[i];
	}
}

void Slice::parsingMaster()
{
	cout << "Enter a string: ";
	string command; 
    cin >> command;
	cout << "\n";
	int length = command.length();
	int start1 = 0, start2 = 0, stop1 = 0, stop2 = 0, step1 = 0, step2 = 0;
	for (int j = 0; j <= length; j++)
	{
		if (command[j] == '[' && command[j+1] != ':')
		{ 
			start1 = j + 1;
		}
		if (command[j] == ':' && flag == 0 && command[j+1] != ':')
		{
			start2 = j-1;
			stop1 = j+1;
			flag = 1;
		}
		if (command[j] == ':' && flag == 1 && command[j+1] != ']')
		{
			stop2 = j-1;
			step1 = j+1;
		}
		if (command[j] == ']' && command[j-1] != ':')
		{
			step2 = j-1;
		}
		if (command[j] == '[' && command[j+1] == ':')
		{
			start = 0;
			flag1 = 1;
		}
		if (command[j] == ':' && command[j+1] == ':')
		{
			stop = N - 1;
			flag2 = 1;
		}
		if (command[j] == ']' && command[j-1] == ':')
		{
			step = 1;
			flag3 = 1;
		}
	}
	string Sstart;
	string Sstop;
	string Sstep;
	if (flag1 == 0)
	{
	   Sstart.append(command, start1, start2); 
       start = stoi(Sstart);
	}
	if (flag2 == 0)
	{
       Sstop.append(command, stop1, stop2);
	   stop = stoi(Sstop);
	}
	if (flag3 == 0)
	{
	   Sstep.append(command, step1, step2);
	   step = stoi(Sstep);
	}
	if (flag2 == 1 && step < 0)
	{
		stop = 0;
	}
	if (flag1 == 1 && step < 0 && stop < 0)
	{
		start = -N;
	}
}

void Slice::obj()
{
	int *arr_result;
	arr_result = new int[N];
	int l = 0;
	if (start < 0 && flag1 == 0)
	{
		start = N + start;
	}
	if (stop < 0)
	{
		stop = N + stop;
	}
	if (step > 0 && start < stop) 
	{
	   for (int i = 0; i <= stop - start; i++)
	   {
		   if (i == 0)
		   {
		       arr_result[0] = array[start];
		   }
		   else if (i != 0)
		   {
			   start = start + step;
			   if (start < stop)
			   {
			        arr_result[i] = array[start];
			   }
			   else 
			   {
				   break;
			   }
		   }
		   l = i;
	   }
	   for (int k = 0; k <= l; k++)
	   {
		   cout << arr_result[k] << " ";
	   }
	}
	else if (step < 0 && start > stop) 
	{
		int p;
		step = -1*step;
		int *arr_result1;
		arr_result1 = new int[N];
		for (int j = 0; j <= start - stop; j++)
		{
			if (j == 0)
			{
			   arr_result1[j] = array[start];
			}
			else if (j != 0)
			{
				step = j*step;
				arr_result1[j] = array[start - step];
			}
			p = j;
		}
		for (int z = 0; z < p; z++)
		{
			cout << arr_result1[z] << " ";
		}
	}
}

Slice::~Slice()
{
	delete[] array;
}