// Op_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace::std;

int main()
{
    float a1;
    float a2;
    float a3;
    float b1;
    float b2;
    float b3;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cin >> b1;
    cin >> b2;
    cin >> b3;
    if (a1 / b1 == a2 / b2 && a1/b1 == a3 / b3 && a2/b2==a3/b3) {
        cout << "Vectros are collineal";
    }
    else {
        cout << "Vectors are not collineal";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
