/** cautarea secventiala a unui element intr-un vector
- se parcurge vectorul de la inceput pana la prima
  gasire a elementului cautat
- functia returneaza 1 sau 0
**/

#include <iostream>
#include "vector.h"
using namespace std;

int cautareSecventiala(int x[], int n, int k)
{
    int i;
    for(i = 0; i < n; i++)
        if(x[i] == k)
            return 1;
    return 0;
}
/**pozitia primei aparitii a elementului cautat **/
void cautarePozitie(int x[], int n, int k)
{
    int i, aux = 0;
    for(i = 0; i < n; i++)
        if(x[i] == k)
        {
          cout << i;
          aux = 1;
          break;
        }
    if(aux == 0)
        cout << "nu exista";
}
/** pozitia ultimei aparitii a elementului cautat **/
void cautareUltimaPozitie(int x[], int n, int k)
{
    int i, aux = 0;
    for(i = n-1; i >= 0; i--)
        if(x[i] == k)
        {
          cout << i;
          aux = 1;
          break;
        }
    if(aux == 0)
        cout << "nu exista";
}
int main()
{
    int x[30], n, k;
    cout << "n = "; cin >> n;
    citireVector(x, n);
    cout << endl << "numarul cautat: "; cin >> k;
    if(cautareSecventiala(x, n, k) == 1)
        cout << "Exista!";
    else cout << "Nu exista!";

    cautareUltimaPozitie(x, n, k);
    return 0;
}

