#include <iostream>
#include <limits>

using namespace std;
/*
float machineInfPlus(float infinity, int &k)
{
    float infmax = 2.1f;
    float almost_inf = 1.0f;
    k = 0;

    while (infmax > almost_inf) {
        almost_inf = infmax;
        infmax = infmax * 2.0f;
        k++;
    }
    for (int i = 0; i < k - 1; i++) {
        infinity = infinity * 2.0f;
    }

	return (infinity - 0.5) * 2;
}
*/
int main() {

	float infmax_f = 2.1f;
    float almost_inf_f = 1.0f, infinity_f = 1.0f;
    int k = 0;

    while (infmax_f > almost_inf_f) {
        almost_inf_f = infmax_f;
        infmax_f = infmax_f * 2.0f;
        k++;
    }
    for (int i = 0; i < k; i++) {
        infinity_f = infinity_f * 2.0f;
    }

    cout << "Max value for float type: " << (infinity_f - 0.5) * 2 << endl;

    float infmin_f = -2.1f;
    float almost_minus_inf_f = -1.0f, minus_infinity_f = -1.0f;
    int counter_min_f = 0, counter_notmin_f = -1;

    while (infmin_f < almost_minus_inf_f) {
        almost_minus_inf_f = infmin_f;
        infmin_f = infmin_f * 2.0f;
        counter_min_f++;
        counter_notmin_f++;
    }

    //cout << counter_notmin_f << endl;

    for (int t = 0; t < counter_notmin_f; t++) {
        minus_infinity_f = minus_infinity_f * 2.0f;
    }

    cout << "Min value for float type: " << (minus_infinity_f + 0.5) * 2 << endl << endl << endl; 
}	