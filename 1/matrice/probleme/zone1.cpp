//https://www.pbinfo.ro/probleme/781/zone1
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, v[4] = {0};
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;

            if (i < j) {
                if (i < n - j - 1)
                    v[2] += x;
                else if (i != n - j - 1)
                    v[3] += x;
            }
            else if (i != j) {
                if (i < n - j - 1)
                    v[0] += x;
                else if (i != n - j - 1)
                    v[1] += x;
            }

        }
    }
    sort(v, v + 4);
    for (int i = 0; i < 4; i++)
        cout << v[i] << ' ';
    cout << '\n';
    return 0;
}