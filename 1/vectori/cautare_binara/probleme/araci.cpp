//https://www.pbinfo.ro/probleme/4237/araci
#include <bits/stdc++.h>

using namespace std;

const int NMAX = 100001;

int main() {
    int n, A, a[NMAX];
    cin >> n >> A;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx = 0, st=1, dr=30000;;

    while(st <= dr){
        int mid = (st+dr)/2, cnt=0;
        for (int j = 0; j < n; j++)
            cnt += a[j] / mid;
        if(cnt < A)
            dr = mid-1;
        else
            st = mid+1,mx = mid;
    }
    cout << mx << '\n';
    return 0;
}