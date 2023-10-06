//infoarena.ro/problema/sum
#include <bits/stdc++.h>

using namespace std;

ifstream in("sum.in");
ofstream out("sum.out");

int gcd(int a, int b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int x, sum = 0;
        in >> x;
        out << sum << '\n';
    }
    in.close(), out.close();
    return 0;
}
