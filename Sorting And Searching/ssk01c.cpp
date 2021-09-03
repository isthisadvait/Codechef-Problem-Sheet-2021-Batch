/* Problem Code: SSWK01C Platform : Codechef Author : Raman Mehta */
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
    int n; cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    
    }
    sort(v.begin(),v.end());
    int ub=0;
    vi ans;
    ans.push_back(n);
    int x=v[0];
    while(ub!=n){
        ub=upper_bound(v.begin(),v.end(),x)-v.begin();
    
        if(ub!=n){x=v[ub]; ans.pb(n-ub);}
    
    }
    for(int x:ans) cout<<x<<" ";
    
	
	return 0;
}




            