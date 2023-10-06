//https://www.pbinfo.ro/probleme/3316/eratostene5
#include <bits/stdc++.h>

using namespace std;

ifstream in("eratostene5.in");
ofstream out("eratostene5.out");
const int NMAX = 1000001;
int spf[NMAX], contor[NMAX];

int main() {
    for (int i = 2; i <= NMAX; i++)
        if (spf[i] == 0) {
            spf[i] = i;
            for (int j = i + i; j <= NMAX; j += i)
                if (spf[j] == 0)
                    spf[j] = i;
        }
    int n, x;
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> x;
        while (x > 1) {
            contor[spf[x]]++;
            x /= spf[x];
        }
    }
    for (int i = 2; i < NMAX; i++)
        if (contor[i])
            out << i << ' ' << contor[i] << '\n';
    return 0;
}