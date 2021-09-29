/*Problem Name - Gold Collection ,Problem Code -GOLDTRIP.cpp ,Platform - Codechef
                                        Author -Raman Mehta
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
    
	int t;
	cin>>t;
	while(t--){
	    int n; 
	    ll k; cin>>n;
	    vector<ll>v(n),p(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(i==0) p[0]=v[0];
	        else{
	            
	          p[i]=v[i];
	          p[i]+=p[i-1];
	        }
	    }
	   
	    int ans=0;
	    int q;cin>>q;
	    while(q--){
	        int l,r; cin>>l>>r;
	        l--,r--;
	        ans=p[r];
	        if(l>=1) ans-=p[l-1];
	    
	       cout<<ans<<endl;
	    }
	}
	return 0;
}
