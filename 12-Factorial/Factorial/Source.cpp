#include<iostream>
#include <math.h>

using namespace std;

int checkInput()
{
    while (true)
    {
        float num;
        cout << "Enter a positive number less than 100000:\n";
        cin >> num;
        
        if(num < 0 || num >= 100000 || floor(num)!=num || cin.fail()) //cin.fail() tells about state "badbit", when can't read;
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

int factorial(int numbr)
{
    int i,fa=1;
    if (numbr == 0)
        return 1;
    
    else for(i=2;i<=numbr;i++)
    fa=fa*i;
    return fa;

}

int main()
{
    int num = checkInput();
    cout << "Look at your result:\n" << factorial(num) << endl;
    return 0;
}
