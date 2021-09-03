/* Problem Code: swpsrt1 Platform : Codechef Author : Raman Mehta */
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
vector<pair<int,int>>vp;

int main() {
    FIO
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
	int nswp=0,mnidx=0;
	pair<int,int>p;
	for(int i=0;i<n;i++){
	    mnidx=i;
	    int j;
	    for(j=i+1;j<n;j++){
	        if(v[j]<v[mnidx]) mnidx=j;
	    }
	    if(mnidx!=i){
    	    nswp++;
	        vp.push_back({i,mnidx});
	        swap(v[i],v[mnidx]);
	    }
	}
	cout<<nswp<<endl;
	for(auto p:vp){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}




            