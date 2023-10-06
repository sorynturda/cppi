//https://www.pbinfo.ro/probleme/13/prefixe
#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[10], t[10];
    cin>>s;
    strcpy(t,s);
    for(int i=strlen(s)-1;i>=0;i--){
        cout<<s<<'\n';
        s[i]=0;
    }
    for(int i=0;t[i];i++)
        cout<<t+i<<'\n';
    return 0;
}
