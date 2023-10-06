//https://www.pbinfo.ro/probleme/1450/memory003
#include <bits/stdc++.h>

using namespace std;

ifstream in("memory003.in");
ofstream out("memory003.out");

int n, m, p, f[300][100], ans;

int main() {
    in >> m >> n >> p;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x, d = 2;
            in >> x;
            while (x > 1) {
                while (x % d == 0) {
                    f[j][d]++;
                    x /= d;
                }
                d++;
                if (x > 1 && d * d > x)
                    d = x;
            }
        }
    }
    int d = 2;
    while (p > 1) {
        int pow = 0;
        while (p % d == 0) {
            pow++;
            p /= d;
        }
        for (int i = 0; i < n; i++){
            if (d < 100 && f[i][d] < pow) {
                // out<<d<<' '<<pow<<'\n';
                f[i][0]=-1;
            }
            if(d > 99)
                f[i][0]=-1;
        }
        d++;
        if (p > 1 && d * d > p)
            d = p;
    }
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<100;j++)
    //         if(f[i][j])
                // cout<<j<<':'<<f[i][j]<<'\n';
    for(int i=0;i<n;i++)
        if(f[i][0]!=-1)
            ans++;
    out << ans << '\n';
    in.close(), out.close();
    return 0;
}