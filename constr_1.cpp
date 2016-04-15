/** Dat fiind un numar natural x, construiti vectorul
divizorilor sai
x = 48
v: 1  2  3  4  6  8  12  16  24  48
**/

#include <iostream>
#include "vector.h"

using namespace std;

int constructieVector(int v[], int x)
{
    int n = 0, i;
    for(i = 1; i <= x/2; i++)
        if(x % i == 0)
        {
            v[n] = i;
            n++;
        }
   v[n] = x;
   n++;
   return n;
}

int main()
{
    int v[50], x, n;
    cout << "x = "; cin >> x;
    n = constructieVector(v, x);
    afisareVector(v, n);
    return 0;
}

