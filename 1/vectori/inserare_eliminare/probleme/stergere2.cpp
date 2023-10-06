//https://www.pbinfo.ro/probleme/4385/stergere2
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000], mn = 1e9;
    cin >> n;
    for (int i = 0; i < n; i++) {cin >> a[i]; mn = min(mn, a[i]);}

    for (int i = n - 1; i >= 0; i--)
        if (a[i] == mn) {
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
        }


    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}