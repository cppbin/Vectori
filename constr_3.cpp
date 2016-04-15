/** Dat fiind un vector de numere intregi, construiti
doi vectori noi, unul care sa contina elemente negative
si unul care sa contina elemente pozitive **/

#include <iostream>
#include "vector.h"

using namespace std;

void constructie(int v[], int v1[], int v2[], int n)
{
    int k1 = 0, k2 = 0, i;
    for(i = 0; i < n; i++)
    {
       if(v[i] < 0)
       {
          v1[k1] = v[i];
          k1++;
       }
       else
       {
          v2[k2] = v[i];
          k2++;
       }
    }
    cout << "\nVectorul negativ:";
    afisareVector(v1, k1);
    cout << "\nVectorul pozitiv:";
    afisareVector(v2, k2);
}

int main()
{
    int v[30], v1[30], v2[30], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    constructie(v, v1, v2, n);
    return 0;
}
