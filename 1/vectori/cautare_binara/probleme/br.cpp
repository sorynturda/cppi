//https://www.infoarena.ro/problema/br
#include <bits/stdc++.h>

using namespace std;

ifstream in("br.in");
ofstream out("br.out");
const int N = 15001;
int ans[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t, dp[N];
    dp[0] = 0;
    in >> n >> t;
    for (int i = 1; i <= n; i++) {
        int x;
        in >> x;
        dp[i] = dp[i - 1] + x;
    }
    while (t--) {
        int k, x, cnt = 0;
        in >> k >> x;
        if (x >= dp[n])
            out << n << "\n";
        else {
            int st = k, dr = n, mid;
            if (dp[n] - dp[k - 1] > x) {
                while (st <= dr) {
                    mid = (st + dr) / 2;
                    if (dp[mid] - dp[k - 1] <= x)
                        st = mid + 1;
                    else
                        dr = mid - 1;
                }
                cnt = st - k;
            }
            else {
                x -= (dp[n] - dp[k - 1]);
                if (dr == n) {
                    st = 1, dr = k - 1;
                    while (st <= dr) {
                        mid = st + (dr - st) / 2;
                        if (dp[mid] <= x)
                            st = mid + 1;
                        else
                            dr = mid - 1;
                    }
                    cnt = dr + n - k + 1;
                }
            }
            out << cnt << '\n';
        }

    }
    in.close(), out.close();
    return 0;
}