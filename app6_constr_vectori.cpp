/** Dat fiind un numar natural n sa se construiasca un vector
care contine toate numerele mai mici ca n, prime cu n.
EX: n = 10   =>  v: 9 7 3  **/

#include <iostream>
#include "vector.h"
using namespace std;

int cmmdc (int a, int b)
{
    while(a != b)
        if(a > b)
           a -= b;
        else
            b -= a;
    return a;
}

int constructie(int n, int v[])
{
    int i, k = 0;
    for(i = n - 1; i >= 2; i--)
        if(cmmdc(n, i) == 1)
        {
            v[k] = i;
            k++;
        }
    return k;
}

int main()
{
    int v[25], n, k;
    cout << "n = "; cin >> n;
    k = constructie(n, v);
    afisareVector(v, k);
    return 0;
}
