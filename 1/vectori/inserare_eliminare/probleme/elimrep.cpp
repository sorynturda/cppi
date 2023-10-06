//https://www.pbinfo.ro/probleme/2734/elimrep
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] == a[i]) {
                for (int k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }

    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}