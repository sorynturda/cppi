#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> a[i];
        x = a[i];
        int s = 0;
        while (x) {
            s += x % 10;
            x /= 10;
        }
        a[i] %= s;
    }
    for (auto it : a)
        cout << it << ' ';
    puts("");
    return 0;
}