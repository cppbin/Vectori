/** dat fiind un numar x in baza 10
    sa sa afle scrierea lui x in baza b **/

#include <iostream>
using namespace std;

void afisare(int v[], int n)
{
    int i;
    for(i = n-1; i >= 0; i--)
        cout << v[i];
}

int constructie(int x, int v[], int b)
{
    int k = 0;
    while(x > 0)
    {
        v[k] = x % b;
        k++;
        x /= b;
    }
    return k;
}

int main()
{
    int x, v[25], k, b;
    cout << "x = "; cin >> x;
    cout << "baza = "; cin >> b;
    k = constructie(x, v, b);
    afisare(v, k);
    return 0;
}

