/*Problem Name- Zenny and Simple Sum ,Problem Code-SIPM , Platform - Codechef    
                                              Author - Raman Mehta
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
    
	int t; cin>>t;
	while(t--){
	    int n ; cin>>n;
	    
	    unordered_map<int,int>m;
	    ll sP=0,sN=0;int x;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        if(x<0 && m[x]==0) sN+=x;
	        if(x>0 && m[x]==0) sP+=x;
	        m[x]++;
	    }
	    cout<<sP<<" "<<sN<<endl;
	}
	return 0;
}
