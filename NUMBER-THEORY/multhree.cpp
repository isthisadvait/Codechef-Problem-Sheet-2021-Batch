/* Problem Code -MULTHREE Platform-Codechef Author - Raman Mehta*/
#include <iostream>
using namespace std;
#define ll long long

int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll k;
	    int d0,d1;
	    cin>>k>>d0>>d1;
	    int s=d0+d1;
	    int c=((2*s)%10)+((4*s)%10)+((8*s)%10)+((6*s)%10);
	    ll num_cyc=(k-3)/4;
	    ll tot=0;
	    if(k==2)
	    {
	      tot =s;
	    }
	    else
	      {
	          tot=s+(s%10)+(c*1LL*num_cyc);
	          int left=(k-3)-(num_cyc*4);
	          int p=2;
	          for(int i=1;i<=left;i++)
	          {
	              tot+=((p*s)%10);
	              p=(p*2)%10;
	          }
	          
	      }
	      if(tot%3==0)
	      cout<<"YES\n";
	      else      
	      cout<<"NO\n";
	    
	}
	return 0;
}

