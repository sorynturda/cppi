//https://www.pbinfo.ro/probleme/1255/lipsa
#include <bits/stdc++.h>

using namespace std;

ifstream in("lipsa.in");
ofstream out("lipsa.out");

int main() {
    int n, x, ans;
    in >> n;
    ans = n;
    for(int i=1;i<n;i++){
        in>>x;
        ans ^=(x^i);
    }
    out<<ans<<'\n';
    return 0;
}