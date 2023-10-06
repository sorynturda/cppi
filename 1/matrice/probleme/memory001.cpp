//https://www.pbinfo.ro/probleme/1444/memory001
#include <bits/stdc++.h>

using namespace std;

ifstream in("memory001.in");
ofstream out("memory001.out");


long long v[1000];

int main() {
    int n, m;
    in >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            int x;
            in >> x;
            v[j] += x * 1LL;
        }
    long long mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
        if(mn > v[i])mn=v[i];
    for (int i = 0; i < n; i++)
        if (v[i] == mn) {
            out << i+1 << '\n';
            break;
        }
    in.close(), out.close();
    return 0;
}