//https://www.pbinfo.ro/probleme/12/initiale
#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    for (int i = 0; s[i]; i++)
        if (i == 0 || !s[i + 1])
            s[i] -= ('a' - 'A');
        else if (s[i] >= 'a' && (s[i - 1] == ' ' || s[i + 1] == ' '))
            s[i] -= 32;
    cout << s << '\n';
    return 0;
}