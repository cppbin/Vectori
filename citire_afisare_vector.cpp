/** citirea si afisarea unui vector **/

#include <iostream>
using namespace std;

//functia de citire
void citireVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x["<<i<<"]= ";
        cin >> x[i];
    }
}

//functia de afisare
void afisareVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << x[i] << " ";
}

//1.suma si produsul elementelor
void Suma_si_Produs(int x[], int n)
{
    int S = 0, P = 1, i;
    for(i = 0; i < n; i++)
    {
        S += x[i];
        P *= x[i];   //P = P * x[i]
    }
    cout << endl << "Suma elemetelor = " << S;
    cout << endl << "Produsul elemetelor = " << P;
}

//2. suma si produsul elementelor de pe pozitii div. cu 3
void Suma_si_Produs3(int x[], int n)
{
    int S = 0, P = 1, i;
    for(i = 0; i < n; i++)
        if(i % 3 == 0)
        {
            S += x[i];
            P *= x[i];
        }
    cout << endl << "Suma el. de pe poz. div cu 3=" << S;
    cout << endl << "Produsul el. de pe poz. div cu 3=" << P;
}

int main()
{
    int a[30], n;
    cout << "n = "; cin >> n;
    citireVector(a, n);
    cout << endl << "Elementele citite: ";
    afisareVector(a, n);
    Suma_si_Produs(a, n);
    Suma_si_Produs3(a, n);
    return 0;
}
