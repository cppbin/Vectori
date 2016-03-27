/** stergeti elementul de pe pozitia k dintr-un vector de numere intregi **/

#include <iostream>
using namespace std;

void citire(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cin >> a[i];
}

void afisare(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << a[i] << " ";
}

void deplasare(int a[], int n, int k)
{
    int i;
    for(i = k; i < n; i++)
        a[i] = a[i + 1];
}

int main()
{
    int n, a[25], k;
    cout << "n = "; cin >> n;
    citire(a, n);
    cout << "k = "; cin >> k;
    deplasare(a, n, k);
    afisare(a, n-1);
    return 0;
}
