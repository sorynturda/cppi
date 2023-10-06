//https://www.infoarena.ro/problema/litere
#include <bits/stdc++.h>

using namespace std;

ifstream in("litere.in");
ofstream out("litere.out");

int main() {
    int n, cnt=0;
    in >> n;
    map <char, int> H;
    for(int i=0;i<n;i++){
        char c;
        in>>c;
        H[c]++;
        for(auto const [k,v]:H)
            if(k > c)
                cnt+=v;
    }

    // for(auto c:a)
    //     cout<<c<<' ';

    out<<cnt<<'\n';
    in.close(), out.close();
    return 0;
}