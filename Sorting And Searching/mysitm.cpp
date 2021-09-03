/* Problem Code: MYSITM Platform : Codechef Author : Raman Mehta */
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
  ull n,h,w;
bool check (ull x){
    return ((x/h)*(x/w))>=n;
}
int main() {
    FIO
    int t; cin>>t; 
    while(t--){
         cin>>n>>h>>w;
        ull ans;
        ull low=0,high=max(h,w)*n,mid;
        while(high>=low){
            mid= low + (high-low)/2;
            if(check(mid)){
                ans=mid;
                high=mid-1;
            }
            else low =mid+1;
            
        }
        cout<<ans<<endl;
    }
    
	
	return 0;
}




            