//https://www.infoarena.ro/problema/ecuatii2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void solve() {
    char s[256];
    int x = 0, minus = 0;
    int xs = 0, xd = 0, ns = 0, nd = 0, n = 0;
    float ans;
    scanf("%s", s);
    char *p = strtok(s, "=");
    // printf("%s\n", p);
    int pow = 1;
    // puts(p);
    for (int i = strlen(p) - 1; i >= 0; i--) {
        if (p[i] == 'x') {
            x = 1;
            n = 0, pow = 1;
            if(i == 0)
                xs+=1;
            else
                if(p[i-1]=='+' || p[i-1]=='-')
                    n=1;
        }
        else {
            if (isdigit(p[i])) {
                n += (p[i] - '0') * pow, pow *= 10;
                if (i == 0) {
                    if (x == 1)
                        xs += n;
                    else
                        ns += n;
                }
            }
            else {
                if (p[i] == '-') {
                    if (x == 1) {
                        xs -= n;
                        x = 0;
                    }
                    else
                        ns -= n;
                }
                else {
                    if (x == 1) {
                        xs += n;
                        x = 0;
                    }
                    else
                        ns += n;
                }
                n = 0;
                pow = 1;
            }
        }
    }
    n = 0, pow = 1, x = 0;
    p = strtok(NULL, "=");
    // puts(p);
    for (int i = strlen(p) - 1; p[i]; i--) {
        if (p[i] == 'x') {
            x = 1;
            n = 0, pow = 1;
            if(i == 0)
                xd+=1;
            else
                if(p[i-1]=='+' || p[i-1]=='-')
                    n=1;

        }
        else {
            if (isdigit(p[i])) {
                n += (p[i] - '0') * pow, pow *= 10;
                if (i == 0) {
                    if (x == 1)
                        xd += n;
                    else
                        nd += n;
                }
            }
            else {
                if (p[i] == '-') {
                    if (x == 1) {
                        xd -= n;
                        x = 0;
                    }
                    else
                        nd -= n;
                }
                else {
                    if (x == 1) {
                        xd += n;
                        x = 0;
                    }
                    else
                        nd += n;
                }
                n = 0;
                pow = 1;
            }
        }
    }
    if (xs == xd) {
        if (ns != nd)
            printf("imposibil");
        else
            printf("infinit");
    }
    else {
        xs -= xd;
        nd -= ns;
        printf("%.4lf", 1.0 * nd / xs);
    }
    // printf("s = %d, d = %d\nxs = %d, xd = %d", ns, nd, xs, xd);
    // puts("");
    // printf("%s\n", p);
}

int main() {
    freopen ("ecuatii2.in", "r", stdin);
     freopen ("ecuatii2.out", "w", stdout);
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
        puts("");
    }
    return 0;
}