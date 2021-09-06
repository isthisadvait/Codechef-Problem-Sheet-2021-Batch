/* Problem Code -DIV Platform-Codechef Author - Raman Mehta*/
#include <iostream>
#include<numeric>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    int n; cin>>n;
	    vector<int> v;
	    for(int i=1;i<n/2+1;i++){
	        if(n%i==0){
	            v.push_back(i);
	        }
	    }
	    cout<<accumulate(v.begin(),v.end(),0)<<"\n";
	    
	    
	    
	}
	return 0;
}

