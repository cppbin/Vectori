/** sa se mareasca fiecare valoare dintr-un vector cu 1
x: 5 3 -8 1 4 6
=>  x: 6 4 -7 2 5 7
**/

#include <iostream>
using namespace std;

void citireVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "v["<<i<<"]= ";
        cin >> v[i];
    }
}

void afisareVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << v[i] << "  ";
}

void mareste1(int v[], int n)
{
     int i;
     for(i = 0; i < n; i++)
            v[i] = v[i]+1;
}

int main()
{
    int n, dim;
    cout << "dim maxima = "; cin >> n;
    cout << "dim = "; cin >> dim;
    int x[n];
    citireVector(x, dim);
    cout << endl << "Elementele citite: ";
    afisareVector(x, dim);
    mareste1(x, dim);
     cout << endl << "Elementele marite: ";
    afisareVector(x, dim);
    return 0;
}
