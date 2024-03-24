//회문의 회문
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;

int n;
string s;

int palindrome(int l,int r){

    int result=1;
    for(int i=0;i<(r-l)/2;i++){
        //cout << s[l+i] << " / " << s[r-1-i] << '\n';
        if(s[l+i] != s[r-1-i]){
            result = 0;
            break;
        }
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        //cout << s << ' ';
        int len=s.length();
        int sum=0;
        sum+=palindrome(0,len);
        sum+=palindrome(0,(len-1)/2);
        sum+=palindrome((len-1)/2+1,len);

        cout << '#' << i+1 << ' ';
        if(sum==3) cout << "YES" <<'\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
