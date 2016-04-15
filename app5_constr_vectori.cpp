/** dat fiind un vector cu n elemente, construiti
    multimea asociata vectorului

    v: 1 5 4 5 1 3 2 4 5 1 3 9 8
    w: 1 5 4 3 2 9 8

    - v va fi parcurs de i, w va fi parcurs de j
    - primul element din v se depune fara conditii in w
    - un element din v va fi depus in w doar daca nu exista
      inca in w => functie de cautare
    **/

#include <iostream>
#include "vector.h"
using namespace std;

int cautare(int x[], int n, int k)
{
    int i;
    for(i = 0; i < n; i++)
        if(x[i] == k)
            return 1;
    return 0;
}

//cautam elemente v[i] in w
int constructie(int v[], int n, int w[])
{
    int i, j = 1;
    w[0] = v[0];
    for(i = 1; i < n; i++)
        if(cautare(w, j, v[i]) == 0)
        {
            w[j] = v[i];
            j++;
        }
    return j;
}

int main()
{
    int v[50], w[50], n, m;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    m = constructie(v, n, w);
    cout << "Multimea asociata lui v: ";
    afisareVector(w, m);
    return 0;
}



