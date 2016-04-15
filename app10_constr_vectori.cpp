#include<iostream>
#include "vector.h"
#define dmax 30
using namespace std;

int verificaCifra(int x, int m)
{
    while(x>0)
    {
        if(x%10==m)
            return 1;
        x=x/10;
    }
    return 0;
}

int constructie(int v[],int n,int w[],int m)
{
    int k=0,i;
    for(i=0;i<n;i++)
        if(verificaCifra(v[i],m)==1)
    {
        w[k]=v[i];
        k++;
    }
        return k;
}

int main()
{
    int m,n,k,v[dmax],w[dmax];
    cout<<"n=";cin>>n;
    citireVector(v,n);
    cout<<"m=";cin>>m;
    k=constructie(v,n,w,m);
    if(k==0)
        cout<<"Nu exista!";
    else afisareVector(w,k);
    return 0;

}
