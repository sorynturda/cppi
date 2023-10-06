//https://www.pbinfo.ro/probleme/518/secvzero
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, Lmax = 0, L = 0, final = 0, a[1000];
    cin >> n;
    for(int i=0;i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            L++;
        else
            L = 0;
        if (L > Lmax)   
            Lmax = L, final = i + 1;
    }
    //secventa de 0 maxima
    //retinem pozitia finala, cea initiala se deduce din lungimea maxima...
    cout << final - Lmax + 1 << ' ' << final << '\n';
    return 0;
}