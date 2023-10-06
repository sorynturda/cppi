//https://www.pbinfo.ro/probleme/303/eratostene
#include <bits/stdc++.h>

using namespace std;

ifstream in("eratostene.in");
ofstream out("eratostene.out");

const int n = 1e6, sqn = 1e3;
bool sieve[n + 1];

int main() {
    sieve[0]=sieve[1]=true;
    for (int i = 2; i <= sqn; i++) {
        if (sieve[i] == false) {
            for (int j = i * i; j <= n; j += i)
                sieve[j] = true;
        }
    }
    int l, x, asn = 0;
    in >> x;
    while (x--) {
        in >> l;
        if (sieve[l] == false)
            asn++;
    }
    out << asn << '\n';
    in.close(), out.close();
    return 0;
}