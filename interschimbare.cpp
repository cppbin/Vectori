#include <iostream>
#include "vector.h"
using namespace std;

void interschimbare(int v[], int n)
{
    int aux, i, j;
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
           if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main()
{
    int v[30], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << endl << "Vectorul nesortat: ";
    afisareVector(v, n);
    interschimbare(v, n);
    cout << endl << "Vectorul sortat: ";
    afisareVector(v, n);
    return 0;
}
