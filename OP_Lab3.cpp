// OP_Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;


int main()
{
    float x;
    cin >> x;
    float Sum = 0;
    int n = 1;
    int k = 1;
    float an = 1;
    float fact;
    while (k < 10 && abs(an)>pow(10, -5)) {
        fact = 2 * n;
        float i = 1;
        for (i = 1; i < 2*n; i++) {
            fact = abs(fact * i);
        }
        cout << fact << endl;
        an = pow(x, n) / fact;
        Sum = Sum + an;
        n++;
        k++;
        
    }
    cout << Sum <<endl;
}

