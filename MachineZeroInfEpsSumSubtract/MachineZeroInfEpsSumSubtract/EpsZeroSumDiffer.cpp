#include <iostream> 

using namespace std;

// Сделаем функции для каждого типа и введем параметр k для будущих заданий
// Передача по адресу сохраняет переменную вне функции

float machineEps(float e, int &k)
{
    k = 0;
    do {
        e /= 2.0f;
        k++;
    } while(e + 1.0 > 1.0);

    return e;
}

double machineEps(double e, int &k)
{
    k = 0;
    do {
        e /= 2.0;
        k++;
    } while(e + 1.0 > 1.0);

    return e;
}

long double machineEps(long double e, int &k)
{
    k = 0;
    do {
        e /= 2.0;
        k++;
    } while(e + 1.0 > 1.0);

    return e;
}

float machineZero(float zero, int &m)
{
    m = 0;
    do {
        zero /= 2.0f;
        m++;
    } while(zero /= 2 > 0);

    return zero;
}

double machineZero(double zero, int &m)
{
    m = 0;
    do {
        zero /= 2.0;
        m++;
    } while(zero /= 2 > 0);

    return zero;
}

long double machineZero(long double zero, int &m)
{
    m = 0;
    do {
        zero /= 2.0;
        m++;
    } while(zero /= 2 > 0);

    return zero;
}

//

int main()
{   
	//here about plus & minus Infiniti
	//float

	float max = 2.1, limitPlusInf = 1.0, plusInf = 1.0;
    int countMax = 0;
    
    while (max > limitPlusInf)
    {
            limitPlusInf = max;        
            max *= 2.0;
            countMax++;
    
    }  

    for(int i = 0; i < countMax - 1; i++)
    {
        plusInf *= 2.0;
    }
  

	float min = -2.1, limitMinusInf = -1.0, minusInf = -1.0;
    int countMin = 0;
    
    while (min < limitMinusInf)
    {
            limitMinusInf = min;        
            min *= 2.0;
            countMin++;
    }  
    
    for (int j = 0; j < countMin - 1; j++)
    {
        minusInf *= 2.0;
    }
    
	//double

	double max_d = 2.1, limitPlusInf_d = 1.0, plusInf_d = 1.0;
    int countMax_d = 0;
    
    while (max > limitPlusInf_d)
    {
            limitPlusInf_d = max_d;        
            max_d *= 2.0;
            countMax_d++;
    
    }  

    for(int i = 0; i < countMax_d - 1; i++)
    {
        plusInf_d *= 2.0;
    }


	double min_d = -2.1, limitMinusInf_d = -1.0, minusInf_d = -1.0;
    int countMin_d = 0;
    
    while (min_d < limitMinusInf_d)
    {
            limitMinusInf_d = min_d;        
            min_d *= 2.0;
            countMin_d ++;
    }  
    
    for (int j = 0; j < countMin_d - 1; j++)
    {
        minusInf_d *= 2.0;
    }
  
	//longdouble

	long double max_ld = 2.1, limitPlusInf_ld = 1.0, plusInf_ld = 1.0;
    int countMax_ld = 0;
    
    while (max_ld > limitPlusInf_ld)
    {
            limitPlusInf_ld = max_ld;        
            max_ld *= 2.0;
            countMax_ld ++;
    
    }  

    for(int i = 0; i < countMax_ld - 1; i++)
    {
        plusInf_ld *= 2.0;
    }
  

	long double min_ld = -2.1, limitMinusInf_ld = -1.0, minusInf_ld = -1.0;
    int countMin_ld = 0;
    
    while (min_ld < limitMinusInf_ld)
    {
            limitMinusInf_ld = min_ld;        
            min_ld *= 2.0;
            countMin_ld ++;
    }  
    
    for (int j = 0; j < countMin_ld - 1; j++)
    {
        minusInf_ld *= 2.0;
    }
	
	//here Infinity ends

	//under_score better, than camelCase, when there is such first letter in a word

    int k = 0;
	int m = 0;

    // For "float"
    float f_e = machineEps((float) 1.0, k);
	float f_z = machineZero((float) 1.0, m);
    cout << "\nfloat\n" << endl;
    cout << "Machine epselon: " << f_e << endl;
	cout << "Number of divisons by 2 for e: " << k << endl;
    cout << "Machine zero: " << f_z << endl;
	cout << "Number of divisons by 2 for zero: " << m << endl;
	cout << "Sum of zero and epsilon: " << f_z + f_e << "\n";
	cout << "The difference of zero and epsilon: " << f_z - f_e << "\n";
	cout << "Max value: " << ( plusInf - 0.5 ) * 2 << "  reps: " << countMax << endl; 
	cout << "Min value: " << ( minusInf + 0.5 ) * 2 << "  reps: " << countMin << endl;

    // For "double"
    double d_e = machineEps((double) 1.0, k);
	double d_z = machineEps((double) 1.0, m);
    cout << "\ndouble\n" << endl;
    cout << "Machine epselon: " << d_e << endl;
	cout << "Number of divisons by 2 for e: " << k << endl;
    cout << "Machine zero: " << d_z << endl;
	cout << "Number of divisons by 2 for zero: " << m << endl;
	cout << "Sum of zero and epsilon: " << d_z + d_e << "\n";
	cout << "The difference of zero and epsilon: " << d_z - d_e << "\n";
	cout << "Max value: " << ( plusInf_d - 0.5 ) * 2 << "  reps: " << countMax_d << endl; 
	cout << "Min value: " << ( minusInf_d + 0.5 ) * 2 << "  reps: " << countMin_d << endl;

    // For "long double"
    long double ld_e = machineEps((long double) 1.0, k);
	long double ld_z = machineEps((long double) 1.0, m);
    cout << "\nlong double\n" << endl;
    cout << "Machine epselon: " << ld_e << endl;
	cout << "Number of divisons by 2 for e: " << k << endl;
    cout << "Machine zero: " << ld_z << endl;
	cout << "Number of divisons by 2 for zero: " << m << endl;
	cout << "Sum of zero and epsilon: " << ld_z + ld_e << "\n";
	cout << "The difference of zero and epsilon: " << ld_z - ld_e << "\n";
	cout << "Max value: " << ( plusInf_ld - 0.5 ) * 2 << "  reps: " << countMax_ld << endl; 
	cout << "Min value: " << ( minusInf_ld + 0.5 ) * 2 << "  reps: " << countMin_ld << endl;
    return 0;
}

//I've tried function, but it runs "1.INF"

/* 
float machineInfPlus(float infinity, int &k)
{
    //плюс бесконечность
    
    float max = 2.1f, limit_plus_inf = 1.0f;
    k = 0; 
    
    while (max > limit_plus_inf)
    {
            limit_plus_inf = max;        
            max *= 2.0f;
            k++;

            if (k < 0)
            {
                break;
            }
        
    }  

    for(int i = 0; i < k - 1; i++)
    {
        infinity *= 2.0;
    }

	return infinity;
}



	int k = 0;

	float infPlus = (machineInfPlus((float) 1.0, k) - 0.5)*2;
    cout << "Max value: " << infPlus << "  reps" << k << endl;
	*/

