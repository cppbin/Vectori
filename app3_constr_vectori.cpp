/** construiti un vector cu primele n numere din sirul lui Fibonacci **/

#include <iostream>
using namespace std;

void constructie(long int f[], int n)
{
    int i;
    f[1] = 0;
    f[2] = 1;
    for(i = 3; i <= n; i++)
        f[i] = f[i-1] + f[i-2];
}

void afisareVector(long int f[], int n)
{
    int i;
    for(i = 1; i <= n; i++)
        cout << f[i] << " ";
}

int main()
{
    long int f[150], n;
    cout << "n = "; cin >> n;
    constructie(f, n);
    afisareVector(f, n);
    return 0;
}
