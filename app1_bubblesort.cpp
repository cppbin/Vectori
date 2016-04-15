#include <iostream>
#include "vector.h"
using namespace std;
//descrescator
void bubblesort(int v[], int n)
{
    int i, aux, sw;
    do
    {
        sw = 0;
        for(i = 0; i < n-1; i++)
            if(v[i] < v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1]=aux;
                sw = 1;
            }
    }while(sw == 1);
}

int main()
{
    int v[30], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    bubblesort(v, n);
    cout << "\nprimii 3:" << v[0] << " "
         << v[1] << " " << v[2];
    return 0;
}
