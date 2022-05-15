// solution By Raj Gupta
// Cses Problem increasing 

#include <bits/stdc++.h>
using namespace std;

int main() {

   
    int n;  cin>>n;
    int p;    cin>>p;
    long ans  = 0;
    for(int i  = 1 ;  i < n ;  i++)
   {
        int c;    cin>>c;
        if(c < p){  ans +=  (p-c);  }   
        else{ p = c;}
   }
    cout<<ans;

	return 0;
}
