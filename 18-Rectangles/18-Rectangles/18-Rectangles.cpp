#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class CRect {
public:
    const int x1;
    const int x2;
    const int y1;
    const int y2;
    
    CRect(int x1_, int y1_, int x2_, int y2_) : x1(x1_),
        y1(y1_), x2(x2_), y2(y2_) {}     //конструктор с параметрами(список инициализации)
};


int main() {

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    int a=0, b=0;

    cout << "Rectangle №1 \n";
    cout << "Enter the coordinates of the lower left corner and the coordinates of the upper right corner: \n";
    cin >> x1 >> y1 >> x2 >> y2;

    CRect Rect1(x1, y1, x2, y2);

    cout << "Rectangle №2 \n";
    cout << "Enter the coordinates of the lower left corner and the coordinates of the upper right corner: \n";
    cin >> x1 >> y1 >> x2 >> y2;

    CRect Rect2(x1, y1, x2, y2);

  
 
    if(Rect1.x1>Rect2.x2)  //левый край первого правее правого края второго
        cout << "The rectangles do not intersect\n";
    else if(Rect2.x1>Rect1.x2) //левый край второго правее правого края первого
        cout << "The rectangles do not intersect\n";
    else if(Rect1.y2<Rect2.y1)//верхний край первого лежит ниже нижнего края второго
        cout << "The rectangles do not intersect\n";
    else if(Rect2.y2<Rect1.x1) //верхний край второго ниже нижнего края первого
        cout << "The rectangles do not intersect\n";
    else 
		cout << "The rectangles intersect\n";


    

    return 0;
}