#include <bits/stdc++.h>

using namespace std;
#define FASTIO cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

int main(){
    FASTIO
    
    int n,m,s[101];
    cin >> n >> m;
    for(int i=1;i<=n;i++) s[i]=0;
    for(int i=0;i<m;i++){
        int a,b,k; cin >> a >> b>> k;
        for(int j=a;j<=b;j++){
            s[j]=k;
        }
    }
    for(int i=1;i<=n;i++){
        cout << s[i] << ' ';
    }
    return 0;
}
