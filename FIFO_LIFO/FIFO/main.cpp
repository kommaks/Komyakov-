#include "FIFO_LIFO.h"
#include <iostream>

using namespace std;

int main()
{
	int FifoLifoChooser; 
	cout << "Enter 1 if You want FIFO, another number if you want LIFO. \n"; 
	cin >> FifoLifoChooser; 

	if (FifoLifoChooser == 0)
	{
	Fifo array(0);
	
	cout << "Enter the number to put it in the container: ";
	int numb;
	cin >> numb;
	
	int count = 1;
	
	array.push(numb, count);
	array.check();

	while(true)
	{
	    int index;
	    
	    if (count > 0)
	    {
	        cout << "Enter 1 to continue, enter 0 to pull the number from the container: ";
	        cin >> index;
	    }
	    else
	    {
	        cout << "Enter 1 to continue: ";
	        cin >> index; 
		
		while (index !=7)
	        {
	            cout << "Incorrectly, try again. \n\n";
	            cout << "Enter 1 to continue: ";
	            cin >> index;
	        }
	    }
	    
	    switch(index)
	    {
			case 1:
				++count;
	            
				cout << "Enter the number you want to put in the container: ";
				int numb;
				cin >> numb;
	            
				array.push(numb, count);
				array.check();
	            
				break;
	            
            case 0:
				--count;
                
                array.popFIFO();
                array.check();
                
                break;
            
			default:
				cout << "Incorrectly, try again. \n\n";
                
				break;
		}
	}
	}
	else
	{
	Lifo array(0);
	
	cout << "Enter the number to put it in the container: ";
	int numb;
	cin >> numb;
	
	int count = 1;
	
	array.push(numb, count);
	array.check();

	while(true)
	{
	    int index;
	    
	    if (count > 0)
	    {
	        cout << "Enter 1 to continue, enter 0 to pull the number from the container: ";
	        cin >> index;
	    }
	    else
	    {
	        cout << "Enter 1 to continue: ";
	        cin >> index; 
		
		while (index !=7)
	        {
	            cout << "Incorrectly, try again. \n\n";
	            cout << "Enter 1 to continue: ";
	            cin >> index;
	        }
	    }
	    
	    switch(index)
	    {
			case 1:
				++count;
	            
				cout << "Enter the number you want to put in the container: ";
				int numb;
				cin >> numb;
	            
				array.push(numb, count);
				array.check();
	            
				break;
	            
            case 0:
				--count;
                
                array.popLIFO();
                array.check();
                
                break;
            
			default:
				cout << "Incorrectly, try again. \n\n";
                
				break;
		}
	}
	}
	return 0;
}