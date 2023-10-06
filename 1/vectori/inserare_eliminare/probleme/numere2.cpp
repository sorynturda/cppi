//https://www.pbinfo.ro/probleme/596/numere2
#include <bits/stdc++.h>

using namespace std;

ifstream in("numere2.in");
ofstream out("numere2.out");

int main() {
    int n, cnt = 1;
    in >> n;
    int a[n];
    in >> a[0];
    for (int i = 0; i < n - 1; i++) {
        int x;
        in >> x;
        if (a[cnt - 1] == x) {
            cnt--;
        }
        else
            a[cnt++] = x;

    }
    out << (n - cnt) / 2 << '\n';
    for (int i = 0; i < cnt; i++)if (a[i])out << a[i] << ' ';
    out << '\n';

    in.close(), out.close();
    return 0;
}