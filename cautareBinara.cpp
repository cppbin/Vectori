/** Cautarea binara
- vectorul trebuie sa fie deja sortat crescator
- returneaza pozitia elementului gasit, sau
    -1 in caz contrar
- functia cauta elementul k comparandu-l cu
  elementul din mijlocul vectorului  x[m]
  - daca k == x[m] se returneaza m
    daca k > x[m] atunci cautarea continua in
        jumatatea din dreapta
    daca k < x[m] atunci cautarea continua in
        jumatatea din stanga
 - procesul continua atat timp cat indicii stanga
   si dreapta nu se depasesc **/

#include <iostream>
#include "vector.h"
using namespace std;

int cautareBinara(int x[], int s, int d, int k)
{
    int m;
    while(s <= d)
    {
        m = (s + d)/2;
        if(k == x[m])
            return m;
        else if(k > x[m])
            s = m + 1;
        else d = m -1;
    }
    return -1;
}

int main()
{
    int x[30], n, k;
    cout << "n = "; cin >> n;
    citireVector(x, n);
    cout << "elementul cautat: "; cin >> k;
    cout << endl << cautareBinara(x, 0, n-1, k);
}

