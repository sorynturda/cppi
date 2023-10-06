//https://www.pbinfo.ro/probleme/3356/alfa
#include <bits/stdc++.h>

using namespace std;

ifstream in("alfa.in");
ofstream out("alfa.out");

int main() {
    int n, m = 0, a[1000], k;
    in >> n >> k;
    for (int i = 0 ; i < n; i++) {
        in >> a[i];
        if (a[i] == k)
            pos[m++] = i;
    }

    int lastp = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == k) {
            for (int j = lastp + 1; j < i - 1; j++)
                for (int jj = j + 1; jj < i; jj++)
                    if (a[j] > a[jj])
                        swap(a[j], a[jj]);
            lastp = i;
        }
    }
    for (int i = 0; i < n; i++)out << a[i] << ' ';
    out << '\n';
    in.close(), out.close();
    return 0;
}