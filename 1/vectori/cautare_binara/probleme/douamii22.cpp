//https://www.pbinfo.ro/probleme/4025/douamii22
#include <bits/stdc++.h>

using namespace std;

void divisors(int n) {
    for (int d = 2; d <= n / d; d++)
        if (n % d == 0) {
            cout << d << ' ';
            if (d * d != n)
                cout << n / d << ' ';
        }
    cout<<'\n';
}

int main() {
    int x;
    cin>>x;
    divisors(x);
    return 0;
}
