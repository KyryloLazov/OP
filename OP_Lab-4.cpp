// OP_Lab-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n;//Кільскість членів послідовності
    cin >> n;
    float a1 = 2.0; //перший член послідовності
    float Sum = 2.0; //Сума членів послідовності
    float ai = a1; //Попередній член послідовності
    float an; //Член послідовності
    for (int i = 2; i <= n; i++) {
        an = pow(ai, 2) / (ai + 3); //Знаходження члена послідовності
        ai = an;//присвоєення значення попередньому члену послідовності
        Sum += an; //Знаходження суми
    }
    cout << Sum; //Виведення суми
}

