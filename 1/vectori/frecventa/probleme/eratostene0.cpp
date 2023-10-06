//https://www.pbinfo.ro/probleme/3324/eratostene0
#include <bits/stdc++.h>

using namespace std;

ifstream in("eratostene0.in");
ofstream out("eratostene0.out");

using ull = unsigned long long;
const int NMAX = 1000001;
int spf[NMAX];
ull dp[NMAX];
int main() {
    for (int i = 1; i < NMAX; i++) {
        dp[i] += i ;
        for (int j = i + i; j < NMAX; j += i)
            dp[j] += i;
    }

    for (int i = 1; i < NMAX; i++)
        dp[i] += dp[i - 1];
    int n, i, j;
    in >> n;
    while (n--) {
        in >> i >> j;
        out << dp[j] - dp[i - 1] << '\n';
    }
    in.close(), out.close();
    return 0;
}