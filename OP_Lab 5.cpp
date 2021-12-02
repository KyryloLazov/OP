// OP_Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	int Sum = 0;
	int i = 1;
	int digit;
	for (i = 1; i < m; i++) {
		Sum = 0;
		digit = i;
		while (digit != 0) {
			Sum = Sum +(digit % 10);
			digit /= 10;
		}	
		if (Sum == n) {
			cout << i << endl;
		}
	}
}
