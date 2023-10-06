//https://www.infoarena.ro/problema/numere
#include <bits/stdc++.h>

using namespace std;

int rez(int x, int y, int player) {
    if (x == 0 or y == 0)
        return 1 - player;
    int aux = x;
    x = x - (x / y) * y;
    y = y - (y / aux) * aux;
    return rez(x, y, 1 - player);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, t;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << rez(x, y, 0) << '\n';
    }
    return 0;
}