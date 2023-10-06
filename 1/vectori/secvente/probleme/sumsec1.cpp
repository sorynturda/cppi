//https://www.pbinfo.ro/probleme/516/sumsec1
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, s = 0, S = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (s != 0)
            s += x;
        if (x % 2 == 1) {
            if (s == 0)
                s = x, S = x;
            else
                S = s;
            }
    }
    cout << S << '\n';
    return 0;
}