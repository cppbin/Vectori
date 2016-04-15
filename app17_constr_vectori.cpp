#include <iostream>
#include "vector.h"
using namespace std;

void constructie(int v[], int n, int w[])
{
    int i;
    for(i = 0; i < n; i++)
        w[i] = 9 - v[i];
}

int main()
{
    int n, v[25], w[25];
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << "cifrul: ";
    afisareVector(v, n);
    constructie(v, n, w);
    cout <<endl << "criptat: ";
    afisareVector(w, n);
    return 0;
}
