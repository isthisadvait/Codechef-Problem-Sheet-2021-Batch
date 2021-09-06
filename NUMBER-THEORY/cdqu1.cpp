/* Problem Code -CDQU1 Platform-Codechef Author - Raman Mehta*/
#include<iostream>
#include<cstring>
typedef long long int ll;
using namespace std;
bool Primes[10000003];
int main()
{
	ll t,i,j;
	memset(Primes,true,sizeof(Primes));
	Primes[0]=false;
	Primes[1]=false;
	for(i=2;i<=10000000;i++)
	{
		if(Primes[i])
		{
			for(j=i*2;j<=10000000;j+=i)
			{
				Primes[j]=false;
			}
		}
	}
	cin>>t;
	while(t--)
	{
		ll m,N;
		ll sum=0;
		cin>>m>>N;
		for(i=m;i<=N;i++)
		if(Primes[i])
		sum+=i;
		cout<<sum<<"\n";
	}
	return 0;
}

