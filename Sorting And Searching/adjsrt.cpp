/* Problem Code: ADJSRT Platform : Codechef Author : Raman Mehta */
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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int m=0;
    vector<int> ans;
    
    for(int i=0;i<n;i++){
            int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]) {
                m++;
                swap(v[j],v[j+1]);
                ans.push_back(j);
                flag=1;
                
            }
        }
        if(flag==0) break;
        
    }
    cout<<m<<endl;
    for(int x:ans) cout<<x<<" ";
    cout<<endl;
	
	return 0;
}




            