#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n, ans = 0;
    cin >> n;
    vector<int>a(n);
    for (auto &it : a)
        cin >> it;
    for (int i = 0; i < n/2; i++) {
        if (gcd(a[i], a[n - i - 1]) == 1)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}