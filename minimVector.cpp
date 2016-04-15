/** minimul elementelor
    maximul elementelor
    pozitiile pe care este intalnit minimul
    minimul elementelor pare
**/
#include <iostream>
#include <limits.h>
#include "vector.h"
using namespace std;

int minim(int a[], int n)
{
    int i, m = a[0];
    for(i = 1; i < n; i++)
        if(a[i] < m)
           m = a[i];
    return m;
}

int maxim(int a[], int n)
{
    int i, M = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > M)
            M = a[i];
    return M;
}

void afiseazaPozitiiMinim(int a[], int n)
{
    int i, m = minim(a, n);
    for(i = 0; i < n; i++)
        if(a[i] == m)
           cout << i << " ";
}

int minimPare(int a[], int n)
{
    int m, i;
    if(a[0] % 2 == 0)
        m = a[0];
    else m = INT_MAX;
    for(i = 1; i < n; i++)
        if(a[i] < m && a[i] % 2 == 0)
            m = a[i];
    return m;
}

int main()
{
    int a[30], n;
    cout << "n = "; cin >> n;
    citireVector(a, n);
    afisareVector(a, n);
    cout << endl << "minim = " << minim(a, n);
    cout << endl << "maxim   afiseazaPozitiiMinim(a, n); = " << maxim(a, n);
    cout << endl << "pozitiile minimului: ";
    afiseazaPozitiiMinim(a, n);
    cout << endl << "minim pare = " << minimPare(a, n);
    return 0;
}
