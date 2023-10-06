//https://www.infoarena.ro/problema/restante
#include <bits/stdc++.h>

using namespace std;

ifstream in("restante.in");
ofstream out("restante.out");

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    in >> n;
    // char s[n][17];
    map <string, int>H;
    for (int i = 0; i < n; i++) {
        string s;
        in>>s;
        sort(s.begin(), s.end());
        H[s]++;
    }
    int ans=0;
    for(auto const [k,v]:H)
        if(v==1)
            ans++;
    out<<ans<<'\n';
    in.close(), out.close();
    return 0;
}