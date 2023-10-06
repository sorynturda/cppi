//https://www.pbinfo.ro/probleme/1927/bitsort
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    bitset<300001>a;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        a.set(x);
    }
    for (int i = 0; i <= 300000; i++)
        if (a.test(i))
            cout << i << ' ';
    cout << '\n';
    return 0;
}