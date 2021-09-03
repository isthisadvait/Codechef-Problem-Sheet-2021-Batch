/* Problem Code: SUBS Platform : Codechef Author : Raman Mehta */
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
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=1000000001;
        for(int i=0;i<=n-k;i++){
            ans=min(ans,v[i+k-1]-v[i]);
        }
        cout<<ans<<endl;
    }
    
	
	return 0;
}




            