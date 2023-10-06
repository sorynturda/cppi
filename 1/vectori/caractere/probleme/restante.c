//https://www.infoarena.ro/problema/restante
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp (const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int comp2(const void *a, const void *b) {
    return *(const char*)a - *(const char*)b;
}


int main() {
    freopen("restante.in", "r", stdin);
    // freopen("restante.out", "w", stdout);
    int n;
    scanf("%d", &n);
    char **s = malloc(n * sizeof(char));
    for (int i = 0; i < n; i++)
        s[i] = malloc(17);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
    for (int i = 0; i < n; i++) {
        qsort(s[i], strlen(s[i]), sizeof(char), comp2);
    }
    qsort(s, n, sizeof(s[0]), comp);
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
        if (strcmp(s[i - 1], s[i]) && strcmp(s[i], s[i + 1]))
            ans++;
    if (strcmp(s[0], s[1]))
        ans++;
    if (strcmp(s[n - 1], s[n - 2]))
        ans++;
    for (int i = 0; i < n; i++)
        puts(s[i]);
    printf("%d\n", ans);
    return 0;
}