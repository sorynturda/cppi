//https://www.pbinfo.ro/probleme/256/fiboverif
#include <bits/stdc++.h>

using namespace std;

bool fibo(int x) {
    int a = 1, b = 1, c = 1;
    while (c < x) {
        c = a + b;
        a = b;
        b = c;
    }
    return x == c;
}


int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (fibo(x))
            cout << "DA" << '\n';
        else
            cout << "NU" << '\n';
    }


    return 0;
}