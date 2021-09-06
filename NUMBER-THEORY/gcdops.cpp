/* Problem Code -GCDOPS Platform-Codechef Author - Raman Mehta*/
#include<bits/stdc++.h>
using namespace std;

void FIO(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //        freopen("input.txt","r",stdin);
    //        freopen("output.txt","w",stdout);
    // #endif

}


int main(){
    FIO();
    int t; std::cin>>t;
    while(t--){
       int  n; std::cin>>n;
       std::vector<int> b(n+1);
       for(int i=1;i<=n;i++) std::cin>>b[i];
       int flag=0;
       for(int i=1;i<=n;i++){
           if(i%b[i]!=0){
               flag=1; break;

           }
       }
       if(!flag) std::cout<<"YES\n";
       else std::cout<<"NO\n";
    }
    
     
}

