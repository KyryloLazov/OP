#include <iostream>

using namespace std;

void arrayInput(int k, float *array) {
    cout <<"Input " << k << " numbers:" << endl;
    for (int i = 0; i < k; i++) {
        cin >> array[i];
        
    }
}

bool arrayCheck(float *array, int k, float denom) {
    bool isGeom = true;
    for (int j = 0; j < k - 1; j++) {
         if (array[j + 1] / array[j] == denom) {
             isGeom = true;
         }
         else {
             isGeom = false;
         }
}
        return isGeom;
}

void arrayChange(float* array, bool isGeom, float denom, int k) {
    if (isGeom) { 
        cout << "Denominator = " << denom << endl;
        int a;
        for (int l = 0; l < k; l++) {
             a = int(array[l]);
             if (a % 2 != 0) {
                array[l] = denom;
             }
        }
        for (int y = 0; y < k; y++) {
            cout << array[y] << " ";
        }
    }
    else {
         float avg = (array[0] + array[k - 1]) / 2;
         cout << "Arithmetic mean of the first and last elements =" << avg << endl;
         int b;
         for (int l = 0; l < k; l++) {
             b = int(array[l]);
             if (b % 2 != 0) {
                array[l] = avg;
             }
         }
         for (int y = 0; y < k; y++) {
             cout << array[y] << " ";
         }
    }
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int k;
    cout << "Input amount of numbers:";
    cin >> k;
    float* array = new float[k];
    float denom = 1; 
    arrayInput(k, array); 
    denom = array[1] / array[0]; 
    bool isGeom = arrayCheck(array, k, denom);
    arrayChange(array, isGeom, denom, k);
}
