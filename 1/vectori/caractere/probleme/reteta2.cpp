//https://www.infoarena.ro/problema/reteta2
#include <bits/stdc++.h>

using namespace std;

ifstream in("reteta2.in");
ofstream out("reteta2.out");

void reverse(char * s[21], int k) {
    for (int i = 0; i < k; i++) {
        int n = strlen(s[i]);
        for (int j = 0; j < n / 2; j++) {
            char aux = s[i][j];
            s[i][j] = s[i][n - j - 1];
            s[i][n - j - 1] = aux;

        }
    }
}
/*
01234
rahaz

*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[1001], ans[100][21], aux[21];
    int cantitate[100];
    in.get(s, 1001);
    int pow = 1, n = 0, timp = 0, k = 0, aux_s = 0;
    int t = -1;
    for (int i = strlen(s) - 1; i >= 0; i--)
        if (isdigit(s[i])) {
            n += pow * (s[i] - '0');
            pow *= 10;
        }
        else {
            if (isalpha(s[i])) {
                aux[aux_s++] = s[i];
                if (i == 0) {
                    aux[aux_s] = 0;
                    for (int j = 0; j < k; j++)
                        if (strcmp(ans[j], aux) == 0)
                            t = j;
                    if (t == -1) {
                        strcpy(ans[k], aux);
                        cantitate[k++] = n;
                    }
                    else {
                        cantitate[t] += n;
                        t = -1;
                    }
                    pow = 1;
                    n = 0;
                }
                else if (!isalpha(s[i - 1]) && s[i - 1] != ')') {
                    for (int j = 0; j < k; j++)
                        if (strcmp(ans[j], aux) == 0)
                            t = j;
                    if (t == -1)
                        cantitate[k] = n;
                    else
                        cantitate[t] += n, t = -1;
                    pow = 1;
                    n = 0;
                }
            }
            else {
                if (aux_s) {
                    aux[aux_s] = 0;
                    for (int j = 0; j < k; j++)
                        if (strcmp(ans[j], aux) == 0)
                            t = j;
                    if (t == -1)
                        strcpy(ans[k++], aux);
                    else
                        t = -1;
                    memset(aux, 0, aux_s);
                    aux_s = 0;
                }
                else {
                    if (s[i] == ')') {
                        timp += n;
                        n = 0;
                        pow = 1;
                    }
                }
            }
        }
    // reverse(ans, k);
    for (int i = 0; i < k; i++) {
        int n = strlen(ans[i]);
        for (int j = 0; j < n / 2; j++) {
            char aux = ans[i][j];
            ans[i][j] = ans[i][n - j - 1];
            ans[i][n - j - 1] = aux;

        }
    }
    out << timp << '\n';
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j < k; j++) {
            if (strcmp(ans[i], ans[j]) > 0) {
                strcpy(aux, ans[i]);
                strcpy(ans[i], ans[j]);
                strcpy(ans[j], aux);
                int x = cantitate[i];
                cantitate[i] = cantitate[j];
                cantitate[j] = x;
            }
        }

    for (int i = 0; i < k; i++)
        out << ans[i] << ' ' << cantitate[i] << '\n';
    in.close(), out.close();
    return 0;
}
//(((zahar 100 ou 3) 5 unt 100 nuca 200) 4 (lapte 200 cacao 50 zahar 100)3)20
