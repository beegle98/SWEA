// 수 색칠하기
#include <bits/stdc++.h>
 
using namespace std;
#define FASTIO cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
 
const int N = 1111;
int visited[N];
 
bool compare(pi a,pi b){
    return a.first > b.first;
}
int main(){
    FASTIO
     
    int test_case; cin >> test_case;
    for(int t=1;t<=test_case;t++){
 
        int ans,n;
        vector<pi> s;
        cin >> n;
        memset(visited,0,sizeof(int)*(n+1));
 
        int max1=0, max2=0;
        for(int i=1;i<=n;i++){
            int x; cin >> x;
            if(i%2){
                if(max1<x) max1=x;
            }
            else{
                if(max2<x) max2=x;
            }
            s.push_back({x,i});
        }
        sort(s.begin(),s.end(),compare);
 
        int sum,cnt=1; // cnt = 사용한 색깔 수
        sum=s[0].first;
        for(int i=0;i<s.size();i++){// s.size() == n
            if(cnt==3) break;
            int idx=s[i].second;
            if(visited[idx-1] == cnt || visited[idx+1] == cnt){
                sum+=s[i].first;
                cnt++;
            }
            visited[idx]=cnt;
        }
        if(sum>max1+max2) ans = max1+max2;
        else ans=sum;
 
        cout << "#" << t << ' ' << ans << '\n';
 
        s.clear();
    }
    return 0;
}