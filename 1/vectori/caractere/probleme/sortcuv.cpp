#include <bits/stdc++.h>

using namespace std;

ifstream in("sortcuv.in");
ofstream out("sortcuv.out");


int main() {
    char s[251], t[251][21];
    int n = 0;
    in.getline(s, 251);
    char *p = strtok(s, " ");
    while (p != NULL) {
        strcpy(t[n++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(t[i], t[j]) > 0) {
                char aux[21];
                strcpy(aux, t[i]);
                strcpy(t[i], t[j]);
                strcpy(t[j], aux);
            }
    for (int i = 0; i < n; i++)
        out << t[i] << '\n';
    return 0;

}