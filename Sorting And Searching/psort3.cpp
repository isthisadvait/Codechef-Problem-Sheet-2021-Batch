/* Problem Code: PSORT3 Platform : Codechef Author : Raman Mehta */
#include <bits/stdc++.h>
#define endl  "\n"
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vi  vector<int>
#define vl  vector<long long>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpi vector<pi>
#define vpl vector<pair<ll,ll>> 
#define f first
#define s second
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define FIO  ios::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
using namespace std;
bool comp(pl p1,pl p2){
    if (p1.second==p2.second) return  p1.first<p2.first;
    else return p1.second>p2.second;
}

int main() {
    FIO
    ll n; cin>>n;
    vpl v(n);
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        v[i].first=x;
    }
    for(ll i=0;i<n;i++){
        ll y;cin>>y;
        v[i].second=y;
    }
    
    sort(v.begin(),v.end(),comp);
    for(auto p:v) cout<<p.first<<" "<<p.second<<" ";

    
	
	return 0;
}




            