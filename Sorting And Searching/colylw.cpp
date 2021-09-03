/* Problem Code: COLYLW Platform : Codechef Author : Raman Mehta */
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
        ll n,r,g,b; cin>>n>>r>>g>>b;
        ll col=(r+g+b)/3;
        ll col_d=0;
        if(col<n) col_d=col;
        else col_d=n;
        ll ans=0;
        if((r>=col_d)&&(b>=col_d)) ans=col_d;
        else ans=min(r,b);
        cout<<ans<<endl;
    }
	
	return 0;
}





            