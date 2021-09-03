/* Problem Code: MINEAT Platform : Codechef Author : Raman Mehta */
#include <bits/stdc++.h>
#define endl  "\n"
#define ll long long

#define FIO  ios::sync_with_stdio(0); cin.tie(0);

using namespace std;
ll h,n;
vector<ll> v(100005);
bool check(ll k){
    ll hrs=0;
    for(ll i=1;i<=n;i++){
        hrs += (v[i]+k-1)/k;
    }
    return  (hrs<=h);
}
int main() {
    FIO
    int t; cin>>t;
    while(t--){
        cin>>n>>h;
        ll mx=0;
        for(ll i=1;i<=n;i++){ cin>>v[i]; mx+=v[i];} //cout<<mx<<" ";
        ll lo=1,high=mx;
        ll k,ans=0;
        while(lo<=high){
            k=lo+(high-lo)/2;
            if(check(k)){
                ans=k;
                high=k-1;
            }
            else {
                lo=k+1;
            }
        }
        cout<<ans<<endl;
    }
    
	
	return 0;
}




            