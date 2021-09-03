/* Problem Code: SSPRAC02 Platform : Codechef Author : Raman Mehta */

#include <bits/stdc++.h>
#define endl  "\n"
using namespace std;
int arr[1000];

int main() {
    
    
	int n; cin>>n;
	for(int i=0;i<n;i++)
	{ 
	      cin>>arr[i];
    }	
    
    for(int i=0;i<n;i++){
	     int flag=0;
	  for(int j=1;j<n-i;j++){
	      if(arr[j]<arr[j-1]) 
	      {
	          flag=1;
	          swap(arr[j],arr[j-1]);
	      }
	  }
	      if(flag==0) break;
	  for(int j=0;j<n;j++) cout<<arr[j]<<" ";
	  cout<<endl;
	 
   }
	return 0;
}



            