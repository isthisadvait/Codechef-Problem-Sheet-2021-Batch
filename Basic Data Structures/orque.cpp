/*Problem Name -Candy Shop         ,Problem Code-ORQUE     ,Platform -   Codechef               
                                Solution By- Raman Mehta
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

bool comp(pair<int,int>p1,pair<int,int>p2){
    if((p1.first)==(p2.first)) return p1.second<p2.second;
    else return p1.first<p2.first;
}
int main() {
    FIO
    int t; cin>>t;
    while(t--){
        int n,x,p; cin>>n>>p;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++) {cin>>x; v.push_back({(x+p-1)/p,i});}
        sort(v.begin(),v.end(),comp);
        for(auto p:v) cout<<p.second<<" ";
        cout<<endl;
    }
	
	return 0;
}
