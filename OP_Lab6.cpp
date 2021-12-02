// OP_Lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int find_coef(int a, int b, int result) {
    float fact_a = 1;
    float fact_b = 1;
    float fact_ab = 1;
    
    for (int i = 1; i <= a; i++) {
        fact_a *= i;
    }
    for (int i = 1; i <= b; i++) {
        fact_b *= i;
    }
    for (int i = 1; i <= a-b; i++) {
        fact_ab *= i;
    }
    result = fact_a / (fact_b * fact_ab);
    return result;
}

int main()
{
    int n;
    cin >> n;
    int coef = 0;
    for (int i = 0; i <= n; i++) {
        for (int k = 0; k <= i; k++) {
            coef = find_coef(i, k, coef);
            cout << coef<<" ";
        } 
        cout<<" "<<endl;
    }
}

