//https://www.pbinfo.ro/probleme/771/ordlin
#include <stdio.h>
#include <stdlib.h>

int a[100][100], n, m, sum[100];
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (sum[i] > sum[j]) {
                int aux = sum[i];
                sum[i] = sum[j];
                sum[j] = aux;
                for (int k = 0; k < m; k++) {
                    aux = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = aux;
                }
            }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        puts("");
    }
    return 0;
}
