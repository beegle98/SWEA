#include <bits/stdc++.h>

using namespace std;
#define FASTIO cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

int s[31];
int main(){
    FASTIO
    
    for(int i=1;i<=28;i++){
        int x; cin >> x;
        s[x]=1;
    }
    for(int i=1;i<=30;i++){
        if(s[i]==0) cout << i << '\n';
    }
    return 0;
}
