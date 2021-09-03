/* Problem Code: CNTSORT Platform : Codechef Author : Raman Mehta */


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
//using namespace std;
int arr[101]={0};

int main() {
  //  FIO
    int t; std::cin>>t;
    while(t--)
    {
            int n; std::cin>>n;int mx=-1;
            for(int i=0;i<n;i++){
                int x; std::cin>>x;
                mx=std::max(x,mx);
                arr[x]++;
            }
            for(int i=1;i<=mx;i++){
                if(arr[i]==0) continue;
                while(arr[i]!=0){
                    std::cout<<i<<" ";
                    arr[i]--;
                }
            }
            std::cout<<endl;
            
    }
	
	return 0;
}
