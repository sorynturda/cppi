//https://www.pbinfo.ro/probleme/1030/sumeproduse
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ll n, a = 0, b = 0, x;
    cin >> n;
    for (int i = 0; i < n / 2; i++) {
        cin >> x;
        a += x;
    }
    for (int i = 0; i < n / 2; i++) {
        cin >> x;
        b += x;
    }
    cout << a*b << '\n';
    return 0;
}
