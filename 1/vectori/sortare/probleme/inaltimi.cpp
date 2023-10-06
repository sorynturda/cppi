//https://www.pbinfo.ro/probleme/618/inaltimi
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000], p[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        p[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                swap(a[i], a[j]); swap(p[i], p[j]);
            }
    for (int i = 0; i < n; i++)cout << p[i] << ' ';
    cout << '\n';
    return 0;
}