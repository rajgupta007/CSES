// solution By Raj Gupta
// Cses Problem  no. spiral 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
      // every even no grid starts from up
      // every odd no grid starts fron left
      
      
      int n;  cin>>n;
      while(n--)
      {
            ll x, y;   cin>>x>>y;
            ll ans = 1;
            if(x <= y)
            {
                if(y&1)
                {
                     ans = (ll)y*y - x + 1; 
                }else
                {
                      ans = (ll)(y-1)*(y-1) + x;
                }
            }else
            {
                  if(x&1)
                  {
                       ans = (ll)(x-1)*(x-1) + y; 
                  }else
                  {
                       ans = (ll)x*x  - y +1; 
                  }
            }
            cout<<ans<<endl;
      }
	return 0;
}
