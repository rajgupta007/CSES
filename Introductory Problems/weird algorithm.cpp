#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n;
	cin>>n;cout<<n<<" ";
	while(n!=1)
	{
		if(n&1){cout<<((n*3)+1)<<" ";n=(n*3)+1;}
		else {cout<<n/2<<" ";n=n/2;}
	}
cout<<endl;		
	return 0;
}