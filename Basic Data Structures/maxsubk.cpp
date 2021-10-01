/*Problem Name - Find Maximum In Every Window        ,Problem Code-MXSUBK       ,Platform - Codechef                  
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

int main() {
    FIO
    int t; cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v(n);
        deque<int>dq;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<k;i++){
            while((!dq.empty())&&(v[i]>v[dq.back()])) dq.pop_back();
            while((!dq.empty())&&(i+1-dq.front()>k)) dq.pop_front();
            dq.push_back(i);
        }
        cout<<v[dq.front()]<<" ";
        for(int i=k;i<n;i++){
            while((!dq.empty())&&(v[i]>v[dq.back()])) dq.pop_back();
            while((!dq.empty())&&(i+1-dq.front()>k)) dq.pop_front();
            dq.push_back(i);
            cout<<v[dq.front()]<<" ";
        }
        
       cout<<endl;
    }
	
	return 0;
}
