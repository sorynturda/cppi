#include <stdio.h>
#include <stdlib.h>

const int NMAX = 1000001;

int main() {

    int *spf = calloc(NMAX, sizeof(int));
    for (int i = 2; i < NMAX; i++) {
        if (spf[i] == 0)
            spf[i] = i;
        for (int j = 2 * i; j < NMAX; j += i)
            if (spf[j] == 0)
                spf[j] = i;
    }

    FILE *f = fopen("joc2020.in", "r");
    FILE *F = fopen("joc2020.out", "w");
    int n;
    fscanf(f, "%d", &n);
    while (n--) {
        int x, ans = 1, ant = 0, e = 0;
        fscanf(f, "%d", &x);
        while (x > 1) {
            if (ant != spf[x] && ant) {
                // printf("%d  ", e);
                ans *= (e + 1);
                e = 1;
            }
            else
                e++;
            ant = spf[x];
            x /= spf[x];
        }
        // printf("%d\n", e);
        fprintf(F, "%d ", ans*(e+1));
    }
    fclose(f);
    fprintf(F, "\n");
    fclose(F);

    return 0;
}