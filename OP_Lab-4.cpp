// OP_Lab-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n;//ʳ������� ����� �����������
    cin >> n;
    float a1 = 2.0; //������ ���� �����������
    float Sum = 2.0; //���� ����� �����������
    float ai = a1; //��������� ���� �����������
    float an; //���� �����������
    for (int i = 2; i <= n; i++) {
        an = pow(ai, 2) / (ai + 3); //����������� ����� �����������
        ai = an;//���������� �������� ������������ ����� �����������
        Sum += an; //����������� ����
    }
    cout << Sum; //��������� ����
}

