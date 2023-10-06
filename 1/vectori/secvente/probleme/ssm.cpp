//https://www.infoarena.ro/problema/ssm
#include <bits/stdc++.h>

using namespace std;

ifstream in("ssm.in");
ofstream out("ssm.out");

int main() {
    int n, S;
    in >> n;
    int bestSum = -int(2e9), sum = 0, beg, end, idx;
    for (int i = 1; i <= n; i++) {
        in >> S;
        if (sum < 0)
            sum = S, idx = i;
        else
            sum += S;
        if (bestSum < sum)
            bestSum = sum, beg = idx, end = i;

    }
    out << bestSum << ' ' << beg << ' ' << end << '\n';
    in.close(), out.close();
    return 0;
}
