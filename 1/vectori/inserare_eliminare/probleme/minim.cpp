//https://www.infoarena.ro/problema/minim
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, a[1005], sum[1005], m, viz[1005] = {false};
    // for (int i = 0; i < 1005; i++)
    //     viz[i] = false;

    FILE *f = fopen("minim.in", "r");
    fscanf(f, "%d", &n);
    m = n;
    for (int i = 0; i < n; i++)
        fscanf(f, "%d", &a[i]);
    fclose(f);

    sum[0] = a[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + a[i];
    f = fopen("minim.out", "w");
    while (m > 0) {
        int s = 0, p, u, idx = 0, worstSum = (int)2e9;
        for (int i = 0; i < n; i++) {
            if (a[i] == 15000)
                continue;
            if (s > 0)
                s = a[i], idx = i;
            else
                s += a[i];
            if (worstSum > s)
                worstSum = s, p = idx, u = i;


        }
        fprintf(f, "%d %d %d\n", worstSum, p + 1, u + 1);
        // cout << s << ' ' << p << ' ' << u << '\n';
        for (int i = p; i <= u; i++)
            a[i] = 15000;
        m -= (u - p + 1);
    }
    // for (int i = 0; i < n; i++)
    //     fprintf(f, "%d ", sum[i]);
    fprintf(f, "\n");
    fclose(f);
    return 0;

}