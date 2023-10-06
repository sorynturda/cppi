//https://www.pbinfo.ro/probleme/210/chenar
#include <bits/stdc++.h>

using namespace std;

ifstream in("chenar.in");
ofstream out("chenar.out");

int main() {
    int n;
    in >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)in >> a[i][j];
    for (int i = 0; i < n; i++)out << a[0][i] << ' ';
    for (int i = 1; i < n - 1; i++)out << a[i][n - 1] << ' ';
    for (int i = n - 1; i > -1; i--)out << a[n - 1][i] << ' ';
    for (int i = n - 2; i > 0; i--)out << a[i][0] << ' ';
    out << '\n';
    in.close(), out.close();
    return 0;
}
