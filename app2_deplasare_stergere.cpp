/** stergeti toate elementele pare dintr-un vector **/

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

int deplasare(int a[], int n)
{
    int i, j, k = 0;
    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0)
        {
            k++;
            for(j = i; j < n; j++)
                a[j] = a[j + 1];
            n -= 1;
            i -= 1;
        }
    return k;
}

int main()
{
    int n, a[25], k;
    cout << "n = "; cin >> n;
    citire(a, n);
    cout << endl << "vectorul: ";
    afisare(a, n);
    k = deplasare(a, n);
    cout << endl << "vectorul nou: ";
    afisare(a, n-k);
    return 0;
}
