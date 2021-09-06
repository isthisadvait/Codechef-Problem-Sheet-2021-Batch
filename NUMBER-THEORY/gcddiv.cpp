/* Problem Code -GCDDIV Platform-Codechef Author - Raman Mehta*/
#include <iostream>
#include<algorithm>
using namespace std;

 
bool check(int G,int K){
    int max_prime=1;
    for(int i=2;i*i<=G;i++){
        while(G%i==0){
            G/=i;
         max_prime=max(max_prime,i);
        }
    }
    max_prime =max(max_prime,G);
    if(max_prime<=K)
      return true;
      else return false;
}


int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    int n,k; cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	     for(int i=1;i<n;i++){
        arr[i]=__gcd(arr[i-1],arr[i]);
    
    }
	    int d=arr[n-1];
	    bool isPossible=check(d,k);
	    if(isPossible) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	    
	}
	
	return 0;
}

