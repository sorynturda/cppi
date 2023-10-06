//https://www.pbinfo.ro/probleme/302/cautaprim
#include <bits/stdc++.h>

using namespace std;

ifstream in("cautaprim.in");
ofstream out("cautaprim.out");

int main() {
    vector<bool>sieve(101,true);
    for (int i = 2; i <= 100; i++)
        if (sieve[i] == true)
            for (int j = i * i; j <= 100; j += i)
                sieve[j] = false;
    int n, x;
    in >> n;
    while (n--) {
        in >> x;
        if(x <= 99)
        sieve[x] = false;
    }
    x = 0;
    for (int i = 9; i < 100; ++i)
        if (sieve[i] == true)
            x = i;
    out << x << '\n';
    in.close(), out.close();
    return 0;
}