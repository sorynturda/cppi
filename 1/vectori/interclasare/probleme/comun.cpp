//https://www.pbinfo.ro/probleme/2668/comun
#include <bits/stdc++.h>

using namespace std;
const int NMAX = 100001, B = 30;
int main() {
    int a[NMAX],b[NMAX],c[NMAX];
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>c[i];
    }
    int ans = -1, i = 0, j = 0, k = 0;
    while (i < n && j < n && k < n && ans == -1) {
        if (a[i] == b[j] && c[k] == b[j]) {
            ans = a[i];
            break;
        }
        else {
            if(a[i] < b[j])
                i++;
            else
                if(b[j] < c[k])
                    j++;
                else
                    k++;
        }
    }
    cout << ans << '\n';
    return 0;
}