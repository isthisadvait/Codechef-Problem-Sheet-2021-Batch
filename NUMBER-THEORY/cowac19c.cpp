/* Problem Code -COWAC19C Platform-Codechef Author - Raman Mehta*/
#include <bits/stdc++.h>
#define M1 1000000007
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	static const int N=100005;
	vector<int> ans(N,1);
	for(int i=1;i<N;i++){
	    for(int j=i;j<N;j+=i){
	        ans[j]=(1LL*ans[j]*(i+1))%M1;
	    }
	    
	}

	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<(ans[n]-1)<<"\n";
	    
	}
	return 0;
}

