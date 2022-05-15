// solution By Raj Gupta
// Cses Problem Missing number

#include <iostream>
using namespace std;

int main() {
	int n;     cin>>n;
	int ans = 0;
	int ori = 0;
	for(int i = 1 ; i < n ; i++)
	{
	      int inp;    cin>>inp;
	      ans = ans^inp;
	      ori = ori^i;
	}
	ori ^= n;
	ans = ans^ori;
	cout<<ans;
	return 0;
}
