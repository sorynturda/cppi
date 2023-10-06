//https://www.pbinfo.ro/probleme/1665/pozitiesir
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, pos = 0;
    cin >> n >> a;
    bool exista = false;
    for (int i = 0; i < n ; i++) {
        int x;
        cin >> x;
        if (a <= x)
            pos++;
        if (a == x)
            exista = true;
    }
    if (exista)
        cout << pos << '\n';
    else
        cout << -1 << '\n';
    return 0;
}