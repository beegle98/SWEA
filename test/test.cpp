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
    vector<string> s;
    for(int i=0;i<5;i++){
        string a;
        cin >> a;
        s.push_back(a);
    }
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(s[j].size()<i+1) continue;
            cout << s[j][i];
        }
    }
    return 0;
}
