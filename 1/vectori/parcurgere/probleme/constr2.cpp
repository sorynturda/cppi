#include <bits/stdc++.h>

using namespace std;

bool prim(int x) {
    if (x <= 1)
        return false;
    for (int d = 2; d <= x / d; d++)
        if (x % d == 0)
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int>a(n), ans;
    for (auto &it : a)
        cin >> it;
    for (int i = n - 1; i >= 0; i--)
        if (prim(a[i]))
            ans.push_back(a[i]);
    for (auto it : ans)
        cout << it << ' ';
    cout<<'\n';
    return 0;
}
