// solution By Raj Gupta
// Cses Problem repitition

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;   cin>>s;
	int ans = 0;
	int bcnt = 1;
	for(int i = 1 ; i < s.size() ; i++)
	{
	       if(s[i] == s[i-1])
	       {
	             bcnt++;
	       }
	       else
	       {
	             ans = max(ans, bcnt);
	             bcnt = 1;
	       }
	}
	ans = max(ans, bcnt);
	cout<<ans;
	return 0;
}
