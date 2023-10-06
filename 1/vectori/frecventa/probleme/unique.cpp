//https://www.pbinfo.ro/probleme/4015/unique
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    bitset<200001> a, b;
    while (cin >> x) {
        if (a.test(x))
            b.set(x);
        else
            a.set(x);
    }
    int ans = 0;
    for (int i = 0; i <= 200000; i++)
        if (a.test(i) && !b.test(i))
            ans++;
    cout << ans << '\n';
    return 0;
}