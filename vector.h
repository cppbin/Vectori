#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>
using namespace std;

void citireVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x[" << i << "]= ";
        cin >> x[i];
    }
}

void afisareVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << x[i] << " ";
}

#endif // VECTOR_H_INCLUDED
