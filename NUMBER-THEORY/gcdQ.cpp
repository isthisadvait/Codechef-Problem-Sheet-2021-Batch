/* Problem Code - GCDQ Platform-Codechef Author - Raman Mehta*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
	    
	    int n,q;
	    cin>>n>>q;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int prefixgcd[n];
	    prefixgcd[0]=A[0];
	    for(int i=1;i<n;i++){
	      prefixgcd[i]=__gcd(A[i],prefixgcd[i-1]);
	    }
	    int sufixgcd[n];
	    sufixgcd[n-1]=A[n-1];
	    for(int i=n-2;i>=0;i--){
	      sufixgcd[i]=__gcd(A[i],sufixgcd[i+1]);
	    }
	    
	    for(int i=0;i<q;i++){
	        int l,r;
	        cin>>l>>r;
	        l--;
	        r--;
	        if(l==0){
	            cout<<sufixgcd[r+1] ;
	        }
	        else if(r==(n-1)){
	            cout<<prefixgcd[l-1];
	        }
	        else {
	            cout<<__gcd(prefixgcd[l-1],sufixgcd[r+1]);
	        }
	        cout<<endl;
	    }
	        
	}
	return 0;
}
            