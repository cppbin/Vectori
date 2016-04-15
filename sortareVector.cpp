/* Dat fiind un vector de numere reale
sa se sorteze crescator vectorul pana la jumatate
si descrescator de la jumatate pana la sfarsit
v:  9 5 3 10 4 8 2 5
-> 3 4 5 9 10 8 5 2   */

#include <iostream>
using namespace std;

void citireVector(float x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x["<<i<<"]= ";
        cin >> x[i];
    }
}

void afisareVector(float x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << x[i] << " ";
}

void sortare(float x[], int n)
{
    int sw, i;
    float aux;
    //pana la jumatate - sortare crescatoare
    do
    {
        sw = 0;
        for(i = 0; i < n/2 - 1;i++)
            if(x[i] > x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                sw = 1;
            }
    }while(sw == 1);

    //de la jumatate - sortare descrescatoare
    do
    {
        sw = 0;
        for(i = n/2+1; i < n-1; i++)
            if(x[i] < x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                sw = 1;
            }
    }while(sw == 1);
}





