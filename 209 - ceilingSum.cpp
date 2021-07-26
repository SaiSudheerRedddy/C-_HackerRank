
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   long long a,b,x,ans;
	   cin>>a>>b;
	   if(a==b)
	   ans=0;
	   else if(a>b)
	   {
	       x=a-1;
	       ans = ceil(floor(b-x)/2)+ceil(floor(x-a)/2);
	   }
	   else
	   {
	       x=b-1;
	        ans = ceil(floor(b-x)/2)+ceil(floor(x-a)/2);
	   }
	 
	  cout<<ans<<endl;

	   
	}
	return 0;
}
