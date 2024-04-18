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
    string s;
    cin >> s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]!=s[len-1-i]){
            cout << "0\n";
            return 0;
        }
    }
    cout << "1\n";
    return 0;
}
