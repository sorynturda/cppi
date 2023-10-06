//https://www.pbinfo.ro/probleme/960/sirk
#include <bits/stdc++.h>

using namespace std;



int main() {
    int k;
    cin >> k;
    int x = 1, s = 1;
    while (2 * x - 1 + s <= k) {
        s += (2 * x - 1);
        x++;
    }
    // cout << x << ' ' << s << '\n';
    bool scade = true;
    while (s != k) {
        if (x == 1)
            scade = false;
        if (scade)
            x--;
        else
            x++;
        s++;
    }
    cout << x << '\n';
    return 0;
}