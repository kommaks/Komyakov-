#include <iostream>
#include <math.h>

using namespace std;

int checkInput()
{
    while (true)
    {
        float num;
        cout << "Enter a positive number N from 1 to 100:\n";
        cin >> num;
        
        if(num < 1 || num > 100 || floor(num)!=num || cin.fail()) //cin.fail() tells about state "badbit", when can't read;
			//floor() give integer number less than value
        {
            cin.clear(); //clears error
            cin.ignore(32767, '\n'); //reads and throws values to the buffer
            cout << "Incorrect input. \n";
        }
        
        else 
            return (int)num; 
    }
}

int fibon(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
        return 1;
    
    else
        return fibon(N-1)+fibon(N-2);
}

int main()
{
    int num = checkInput();
     cout << "The first " << num << " fibonacci numbers: \n";
			
			for (int n=0; n<num; ++n)
					cout << fibon(n) << " ";
			cout << endl;
    return 0;
}