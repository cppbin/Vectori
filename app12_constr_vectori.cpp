/**Se citeşte de la tastatură un vector v cu n elemente numere întregi cu cel mult 8 cifre.
 Se cere să se construiască vectorul v1 care va conţine pe fiecare poziţie cel mai mare divizor comun dintre elementul
  din vectorul v de pe poziţia corespunzătoare şi o valoare k citită de la tastatură.
   Ex : dacă vectorul v conţine elementele (125, 23, 44, 121, 30),
    k=210 vectorul v1 va conţine elementele (5, 1, 2, 1, 30). **/
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
void constructie(int v[], int n, int v1[], int k)
{
    int i;
    for(i = 0; i < n; i++)
        v1[i] = cmmdc(v[i], k);

}
int main()
{
    int v[50], v1[50], n, k;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << "k = "; cin >> k;
    constructie(v, n, v1, k);
    afisareVector(v1, n);
    return 0;
}
