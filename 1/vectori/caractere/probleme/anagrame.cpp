//https://www.pbinfo.ro/probleme/97/anagrame
#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[22], t[22], f['z' + 1] = {0};
    cin >> s >> t;
    for (int i = 0; s[i]; i++)
        f[(int)s[i]]++;
    for (int i = 0; t[i]; i++)
        f[(int)t[i]]--;
    for (int i = 'a'; i <= 'z'; i++)
        if (f[i]) {
            cout << 0 << '\n';
            return 0;
        }
    cout << 1 << '\n';
    return 0;
}