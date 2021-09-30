#include <bits/stdc++.h>
#define endl  "\n"
#define pb push_back
/*Problem Name - Sudhanva and Books , Problem CODE - SUDBOOKS  , Platform - Codechef
                Solution By- Raman Mehta
*/
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
    stack<int>s;
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x;
        if(x!=-1){
            cin>>y;
            s.push(y);
        }else{
            if(!s.empty()){
                cout<<s.top()<<endl;
                s.pop();
            }else{
                cout<<"kuchbhi?"<<endl;
            }
        }
    }
    
	
	return 0;
}
