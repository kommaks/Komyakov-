#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

void SortAlgo(int *data, int lenD)
{
  int j = 0;
  int tmp = 0;
  for(int i=0; i<lenD; i++){
    j = i;
    for(int k = i; k<lenD; k++){
      if(data[j]>data[k]){
        j = k;
      }
    }
    tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
  }
  for ( int i = 0; i < lenD; i++ )
	{
		data[i] = rand()%100;
		cout << data[i] << "	";
	}
	cout << "\n" << endl;
}

int main()	
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	srand ( time(0) );
	int size;
	int array[100];
	cout << "Длина массива: ";
	cin >> size;
	
	for ( int i = 0; i < size; i++ )
	{
		array[i] = rand()%100;
		cout << array[i] << "	";
	}
	cout << "\n" << endl;
		SortAlgo(array, size);
return 0;
}