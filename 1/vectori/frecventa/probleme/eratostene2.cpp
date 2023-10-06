//https://www.pbinfo.ro/probleme/3313/eratostene2
#include <bits/stdc++.h>
using namespace std;
ifstream in("eratostene2.in");
ofstream out("eratostene2.out");
const int N = 1000001;
int main() {
    vector<int>a(N, 0);
    vector<bool>sieve(N, true);
    for (int i = 2; i < N; i++) {
        if (sieve[i] == true) {
            a[i]++;
            for (int j = 2 * i; j < N; j += i)
                a[j]++, sieve[j]=false;
        }
    }
    int n, x;
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> x;
        out << a[x] << ' ';

    }
    in.close(), out.close();
    return 0;
}