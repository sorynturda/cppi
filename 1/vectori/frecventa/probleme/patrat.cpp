//https://www.infoarena.ro/problema/patrat
#include <bits/stdc++.h>

using namespace std;

ifstream in("patrat.in");
ofstream out("patrat.out");
const int N = 141;

int main() {
    int x, y;
    in >> x >> y;
    if (x > y)
        swap(x, y);
    int f[20000] = {0};
    for (int i = 1; i <= 141; i++)
        for (int j = i + 1; j <= 141; j++) {
            int a = i * i + j * j;
            if (a <= 20000 and j != i)
                f[a]++;

        }
    bool exista = false;
    for (int i = x; i <= y; i++)
        if (f[i] > 1) {
            out << i << '\n';
            exista = true;
        }
    if (!exista)
        out << 0 << '\n';
    out.close(), in.close();
    return 0;
}