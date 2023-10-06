#include <stdio.h>
#include <stdlib.h>
int f['z' + 1];
int main() {

    freopen("litere.in", "r", stdin);
    freopen("litere.out", "w", stdout);
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = (int)s[i] + 1; j <= 'z'; j++)
            ans += f[j];
        f[(int)s[i]]++;
        }
    printf("%d\n",ans);
    return 0;
}