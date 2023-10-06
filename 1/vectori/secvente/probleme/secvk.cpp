//https://www.pbinfo.ro/probleme/134/secvk
#include <bits/stdc++.h>

using namespace std;

ifstream in("secvk.in");
ofstream out("secvk.out");

int main() {
    int n, k;
    in >> n >> k;
    vector<int>a(n);
    for (auto &it : a)
        in >> it;
    int smax = 0, s = 0, dr;
    for (int i = 0; i < k; i++)
        s += a[i];
    smax = s, dr = k-1;
    for (int i = k; i < n; i++) {
        s += a[i];
        s -= a[i - k]; //sliding window
        if (s > smax) {
            dr = i;
            smax = s;
        }
    }
    for (int i = dr - k + 1; i <= dr; i++)
        out << a[i] << ' ';
    out << '\n';    
    in.close(), out.close();
    return 0;
}