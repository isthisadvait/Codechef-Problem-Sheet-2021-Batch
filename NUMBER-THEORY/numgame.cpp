/* Problem Code -NUMGAME Platform-Codechef Author - Raman Mehta*/
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0)  cout<<"ALICE\n";
	    else  cout<<"BOB\n";
	}
	return 0;
}
