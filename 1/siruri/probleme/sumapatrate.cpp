//https://www.pbinfo.ro/probleme/1212/sumapatrate
#include <bits/stdc++.h>

using namespace std;

const int MOD = 10234573;

int main() {
    int n;
    cin >> n;
    n%=MOD;
    long long a = n;
    long long b = (n + 1);
    long long c = (2 * n + 1);
    if (a % 2 == 0)
        a /= 2;
    else {
        if (b % 2 == 0)
            b /= 2;
        else
            c /= 2;
    }
    if (a % 3 == 0)
        a /= 3;
    else {
        if (b % 3 == 0)
            b /= 3;
        else
            c /= 3;
    }
    a %= MOD;
    b %= MOD;
    c %= MOD;
    cout << (((a * b) % MOD) * c) % MOD << '\n';
    return 0;
}