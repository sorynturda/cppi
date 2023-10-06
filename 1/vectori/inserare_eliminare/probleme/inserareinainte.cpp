//https://www.pbinfo.ro/probleme/160/inserareinainte
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[50];
    cin>>n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int p = n - 1; p >= 0; p--)
        if (sqrt(a[p]) == (int)sqrt(a[p])) {
            for (int i = n - 1; i >= p; i--)
                a[i + 1] = a[i];
            n++;
            a[p] = sqrt(a[p]);
        }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}