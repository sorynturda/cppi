#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s[600001];
    int n;
    FILE *f = fopen("paritate.in", "r");
    fscanf(f, "%s", s);
    fclose(f);
    n = strlen(s) / 8;
    char ans[n][9], text[n];
    for (int i = 0; i < n; i++) {
        strncpy(ans[i], s + i * 8, 8);
        ans[i][8] = '\0';
    }
    int nu = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0, code = 0;
        for (int j = 1; j < 8; j++) {
            code *= 2;
            if (ans[i][j] == '1')
                code++, cnt++;
        }
        int corect = (ans[i][0] == '1' ? 1 : 0);
        if (cnt % 2 == corect)
            text[i] = code;
        else
            text[i] = -1, nu = 1;
        // printf("%s : %d, %d; code: %d\n",ans[i], corect, cnt%2, code);

    }
    text[n] = 0;
    f = fopen("paritate.out", "w");
    if (nu) {
        fputs("NU\n", f);
        for (int i = 0; i < n; i++)
            if (text[i] == -1)
                fprintf(f, "%d ", i);
        fputs("\n", f);
    }
    else {
        fputs("DA\n", f);
        fputs(text, f);
        fputs("\n", f);
    }
    fclose(f);
    return 0;
}