//https://www.pbinfo.ro/probleme/513/ksort1
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, a[1000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)cin >> a[i];

    for (int i = 0; i < k; i++)
        for (int j = i; j < n; j += k)
            for (int jj = j + k; jj < n; jj += k)
                if (a[j] > a[jj])
                    swap(a[j], a[jj]);

    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
