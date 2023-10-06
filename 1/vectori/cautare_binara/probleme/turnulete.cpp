//https://www.pbinfo.ro/probleme/4470/turnulete
#include <bits/stdc++.h>

using namespace std;

int bsearch_left(int *a, int st, int dr, int x) {
    if (st > dr)
        return st;
    int mid = (st + dr) / 2;
    if (a[mid] < x)
        return bsearch_left(a, mid + 1, dr, x);
    return bsearch_left(a, st, mid - 1, x);

}
int bsearch_right(int *a, int st, int dr, int x) {
    if (st > dr)
        return dr;
    int mid = (st + dr) / 2;
    if (a[mid] > x)
        return bsearch_right(a, st, mid - 1, x);
    return bsearch_right(a, mid + 1, dr, x);
}

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)cin >> b[i];

    for (int i = 0; i < m; i++) {
        int st=bsearch_left(a, 0, n - 1, b[i]);
        int dr=bsearch_right(a, 0, n - 1, b[i]);
        if(st > dr)
            cout<<0<<' ';
        else
            cout<<1LL * (dr-st+1)*b[i]<<' ';
    }
    return 0;
}
