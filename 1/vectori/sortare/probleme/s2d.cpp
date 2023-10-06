//https://www.pbinfo.ro/probleme/1225/sort2dist
using namespace std;

#include <fstream>
#include <iostream>

ifstream in("sort2dist.in");
ofstream out("sort2dist.out");

using ull = unsigned long long;

int main() {
    int n;
    ull a[1000];
    in >> n;
    for (int i = 0; i < n; i++)
        in >> a[i];

    int ans = 0, p1[12500], p2[12500], p = 512;
    for (int i = 0; i < n - 1; i++) {
        jMin = i;
        for(int j = i + 1; j < n; j++)
            //sortare prin selectie
        p /= 2;
    }
    out << ans << '\n';
    for (int i = 0; i < ans; i++)
        out << p1[i] << ' ' << p2[i] << '\n';
    out << '\n';
    in.close(), out.close();
    return 0;
}