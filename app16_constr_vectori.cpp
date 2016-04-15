#include <iostream>
#include "vector.h"
using namespace std;

int verificaPerfect(int x)
{
    int i, s = 0;
    for(i = 1; i <= x/2; i++)
        if(x % i == 0)
           s += i;
    if(x == s)
        return 1;
    else return 0;
}

int constructie(int v[], int n, int w[])
{
    int k = 0, i;
    for(i = 0; i < n; i++)
        if(verificaPerfect(v[i]) == 1)
        {
            w[k] = v[i];
            k++;
        }
    return k;
}

int main()
{
    int n, v[25], w[25], k;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    k = constructie(v, n, w);
    if(k == 0)
        cout << "nu exista numere perfecte";
    else
        afisareVector(w, k);
    return 0;
}




