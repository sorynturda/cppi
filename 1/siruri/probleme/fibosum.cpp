//https://www.pbinfo.ro/probleme/257/fibosum
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        long long a = 1, b = 1, c = 1;
        while (a + b <=  n) {
            c = b + a;
            a = b;
            b = c;
        }
        cout << c << ' ';
        n -= c;
    }
    puts("");
    return 0;
}