//https://www.pbinfo.ro/probleme/1380/pluton
#include <bits/stdc++.h>

using namespace std;

ifstream in("pluton.in");
ofstream out("pluton.out");

int reor(int x) {
    int f[10] = {0};
    while (x > 0) {
        f[x % 10]++;
        x /= 10;
    }
    for (int i = 9; i >= 0; i--)
        while (f[i] > 0) {
            x = x * 10 + i;
            f[i]--;
        }
    return x;
}

int main() {
    int n;
    in >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        in >> it;

    for (int i = 0; i < n; i++)
        b[i] = reor(a[i]);
    sort(b.begin(), b.end());

    int mx = 1, ls = 1, gr = b[0], cnt = 1, mxcnt = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            ls++;
        }
        else {
            cnt++;
            if (mx < ls) {
                gr = b[i - 1];
                mx = ls;
                mxcnt = 1;
            }
            else if (mx == ls)
                mxcnt++;
            ls = 1;
        }
    }
    if(ls > mx){
        mx = ls;
        mxcnt = 1;
        gr = b[n-1];
    }
    out << cnt << '\n' << mx << '\n' << mxcnt << '\n';
    for (auto it : a)
        if (reor(it) == gr)
            out << it << ' ';

    out << '\n';
    in.close(), out.close();
    return 0;
}