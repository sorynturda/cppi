#include <stdio.h>
#include <stdlib.h>

int a[100][100], n, m;

int col(int a[100][100], int n, int m, int x) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i][x];
    return s;
}

int lin(int a[100][100], int n, int m, int x) {
    int s = 0;
    for (int i = 0; i < m; i++)
        s += a[x][i];
    return s;
}

int main() {

    freopen("lincol.in", "r", stdin);
    freopen("lincol.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int q;
    scanf("%d ", &q);
    while (q--) {
        char c;
        int x;
        scanf("%c %d ", &c, &x);
        if (c == 'C')
            printf("%d\n", col(a, n, m, x-1));
        else
            printf("%d\n", lin(a, n, m, x-1));

    }
    return 0;
}
