//https://www.infoarena.ro/problema/puncte2
#include <bits/stdc++.h>

using namespace std;

ifstream f("puncte2.in");
ofstream g("puncte2.out");

using ll = unsigned long long;

int main() {
    ll n;
    f >> n;
    g << (n - 1)*n*(n - 2)*(n - 3) / 24 << '\n';
    return 0;
}