/* Problem Code: AMCS03 Platform : Codechef Author : Raman Mehta */
#include<bits/stdc++.h>
using namespace std;
vector<int>speed(100005),dist(100005);
int n,k;
double f(double t){
    double maxi=0.0,mini=1.0e18;
    for(int i=0;i<n;i++){
        maxi=max(maxi,speed[i]*t+dist[i]);
        mini=min(mini,speed[i]*t+dist[i]);
    }
    return maxi-mini;
}
int main() {
     cin>>n>>k;
     //precision(10);
     for(int i=0;i<n;i++){
         cin>>speed[i]>>dist[i];
     }
     double low=0,high=k;
     for(int _=0;_<=100;_++){
         double mid1 = low + (high-low)/3.0;
         double mid2 = high -(high-low)/3.0;
         double m1 = f(mid1);
         double m2 = f(mid2);
         if(m1 <= m2){
             high = mid2;
         }else {
             low = mid1;
         }

     }
     cout<<fixed<<setprecision(6)<<f(low)<<endl;
     return 0;
}




            