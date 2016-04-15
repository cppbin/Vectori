/** dat fiind un numar x in baza 10
    sa sa afle scrierea lui x in baza 2 **/

#include <iostream>
using namespace std;

void afisare(int v[], int n)
{
    int i;
    for(i = n-1; i >= 0; i--)
        cout << v[i];
}

int constructie(int x, int v[])
{
    int k = 0;
    while(x > 0)
    {
        v[k] = x % 2;
        k++;
        x /= 2;
    }
    return k;
}

int main()
{
    int x, v[25], k;
    cout << "x = "; cin >> x;
    k = constructie(x, v);
    afisare(v, k);
    return 0;
}

