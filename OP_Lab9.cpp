#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>

using namespace std;

int words(char s[], char** array) {
    int i = 0;
    char delims[] = " ";
    char* tok;
    tok = strtok(s, delims);
    while (tok != NULL) {
        array[i] = new char[20];
        array[i] = tok;
        puts(tok);
        i++;
        tok = strtok(NULL, delims);

    }
    return i;
}

void MaxMin(char** array, int i, char MaxWord[20], char MinWord[20]) {
    int a;
    int max;
    int min;
    for (int j = 0; j < i; j++) {
        array[i] = new char[20];
    }
    strcpy_s(MaxWord, sizeof MaxWord + 5, array[0]);
    strcpy_s(MinWord, sizeof MinWord + 5, array[0]);

    for (int j = 0; j < i; j++) {
        a = stoi(array[j]);
        max = stoi(MaxWord);
        min = stoi(MinWord);
        if (stoi(array[j]) > stoi(MaxWord)) {
            strcpy_s(MaxWord, sizeof MaxWord + 5, array[j]);
        }
        if (stoi(array[j]) < stoi(MinWord)) {
            strcpy_s(MinWord, sizeof MinWord + 5, array[j]);
        }
    }

}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int i = 0;
    char s[100];
    char** array = new char* [20];
    char MaxWord[20];
    char MinWord[20];
    cout << "Input string: ";
    cin.getline(s, 100);

    i = words(s, array);
    MaxMin(array, i, MaxWord, MinWord);

    for (int j = 0; j < i; j++) {
        if (stoi(array[j]) == stoi(MinWord)) {
            array[j] = MaxWord;
            j++;
        }
        if (stoi(array[j]) == stoi(MaxWord)) {
            array[j] = MinWord;
            j++;
        }
    }

    cout << "Amount of words =" << i << endl;
    cout << "max = " << MaxWord << " min = " << MinWord << endl;
    for (int j = 0; j < i; j++) {
        cout << array[j] << " ";
    }
}