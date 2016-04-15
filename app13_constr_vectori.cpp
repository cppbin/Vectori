



int sumaCifrelor(int x)
{
    int s = 0;
    while(x > 0)
    {
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}

void constructie(int v[], int n, int v1[])
{
    int i;
    for(i = 0; i < n; i++)
        v1[i] = sumaCifrelor(v[i]);
}

int main()
{
    int v[dmax], v1[dmax], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    constructie(v, n, v1);
    afisareVector(v1, n);
    return 0;
}
