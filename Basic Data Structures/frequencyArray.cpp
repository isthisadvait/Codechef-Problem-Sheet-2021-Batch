/* Problem Code - FREQARRY  Platform - Codechef Author - Raman Mehta*/
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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int>s;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        if(s.size()==n){
            cout<<"prekrasnyy\n";
        }
        else{
            cout<<"ne krasivo\n";
        }
    }
	
	return 0;
}
