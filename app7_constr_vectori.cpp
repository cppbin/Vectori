/** Dat fiind un numar, construiti vectorul cifrelor sale si apoi
afisati cel mai mare si cel mai mic numar care se poate forma cu
acele cifre

 n = 26431 => 12346   si  64321

**/
#include <iostream>
#include <math.h>
#include "vector.h"
using namespace std;

int constructie(int n, int v[])
{
    int i = 0;
    while(n > 0)
    {
        v[i] = n % 10;
        i++;
        n /= 10;
    }

    return i;
}

void bubblesort(int v[], int n)
{
    int aux, sw, i;
    do
    {
        sw = 0;
        for(i = 0; i < n-1; i++)
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sw = 1;
            }
    }while(sw == 1);
}

void constr_nr(int v[], int n)
{
    int i, m = 0, M = 0, p = 1;
    for(i = 0; i < n; i++)
    {
        p
        M = M + v[i] * p;
        m = m + v[i] * pow(10, n-h-1);
    }
    cout << endl<< "m = " << m << endl;
    cout << "M = " << M;
}

int main()
{
    int n, v[10], k;
    cout << "n = "; cin >> n;
    k = constructie(n, v);
    afisareVector(v, k);
    bubblesort(v, k);
    cout << "vectorul sortat: "; afisareVector(v, k);
    constr_nr(v, k);
    return 0;
}




