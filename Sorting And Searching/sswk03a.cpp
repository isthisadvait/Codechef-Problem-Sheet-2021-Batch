/* Problem Code: SSWK03A Platform : Codechef Author : Raman Mehta */
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
    int n; cin>>n;
    vector<int> v(n),smn(n),pmx(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=v[0];
    pmx[0]=0;
    int mn=v[n-1];
    smn[n-1]=1e9+1;
    for(int i=1;i<n;i++){
        mx=max(mx,v[i-1]);
        pmx[i]=mx;
    }
    for(int i=n-2;i>=0;i--){
        mn=min(mn,v[i+1]);
        smn[i]=mn;
    }
	vector<int>ans;
	int vdx=0;
	for(int i=0;i<n;i++){
	    if(pmx[i]<v[i]&&v[i]<smn[i]){
	        vdx++;
	        ans.push_back(i);
	    }
	}
// 	for(int y:pmx) cout<<y<<" ";
// 	cout<<endl;
// 	for(int y:smn) cout<<y<<" ";
// 	cout<<endl;
	cout<<vdx<<endl;
	for(int x:ans) cout<<x<<" ";
	cout<<endl;
    }
	return 0;
}




            