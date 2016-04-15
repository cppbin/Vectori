#include <iostream>
#include "vector.h"

using namespace std;

void constructie(int v[], int n, int w[])
{
    int i, j = 0;
    for(i = 0; i < n; i++)
        if(v[i] % 2 == 0)
        {
           w[j] = v[i];
           j++;
        }
    for(i = 0; i < n; i++)
        if(v[i] % 2 != 0)
        {
            w[j] = v[i];
            j++;
        }
}

int main()
{
    int n, v[50], w[50];
    cout << "n = "; cin >> n;
    citireVector(v, n);
    constructie(v, n, w);
    afisareVector(w, n);
    return 0;
}
