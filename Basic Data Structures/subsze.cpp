/*Problem Name -Subarray Sum Zero         ,Problem Code- SUBSZE      ,Platform -     Codechef              
                                   Author- Raman Mehta
*/
            
#include <bits/stdc++.h>
#define endl  "\n"
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vi  vector<int>
#define pi pair<int,int>
#define f first
#define s second
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define FIO  ios::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
using namespace std;

int main() {
    FIO
    int t ; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(i!=1){
                
                v[i]+=v[i-1];
            }
        }
       // for(int x:v) cout<<x<<" ";
        //cout<<endl;
        int ans =INT_MIN;
        unordered_map<ll,int>um;
        for(int i=1;i<=n;i++){
            if(v[i]==0) ans=i;
            if(um[v[i]]!=0){
                ans =max(ans,abs(i-um[v[i]]));
            }
            if(um[v[i]]!=0) continue;
            um[v[i]]=i;
        }
        cout<<ans<<endl;
        
    }
	
	return 0;
}
