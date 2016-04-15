/** Dat fiind un numar, construiti vectorul cifrelor sale **/

#include <iostream>
#include "vector.h"

int constructie(int x, int v[])
{
    int n = 0;
    while(x > 0)
    {
        v[n] = x % 10;
        x /= 10;
        n++;
    }
    return n;
}

int main()
{
    int v[30], x, n;
    cout << "x = "; cin >> x;
    n = constructie(x, v);
    afisareVector(v, n);
    return 0;
}
