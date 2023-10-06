//https://www.pbinfo.ro/probleme/607/asfalt
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, *a = calloc(10001, sizeof(int)), x, y;
    FILE *f = fopen("asfalt.in", "r");
    fscanf(f, "%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        fscanf(f, "%d %d", &x, &y);
        for (int j = x; j < y; j++)
            a[j]++;
    }
    fclose(f);
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 0)
            ans1++;
        else if (a[i] > 1)
            ans2++;

    f = fopen("asfalt.out", "w");
    fprintf(f, "%d %d\n", ans1, ans2);
    fclose(f);
    return 0;
}