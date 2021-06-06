#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t,n,m,k,l,d=0;
	vector<int> count;
	cin>>t;
	for(int i=0;i<t;i++){
		d = 0;
	    cin>>n>>m>>k;
	    int arr[n+m];
	    for(int j=0;j<n+m;j++){
	        arr[j] = 0;
	    }

	    for(int j=0; j<k;j++){
	        cin>>l;
	        arr[l] = arr[l] + 1;
	    }

	   for(int j = 0;j<=n;j++){
	       if(arr[j]>1){
	           d ++;
	           count.push_back(j);
	       }
	   }
	   cout<<d<<" ";
	   for(int j=0; j<count.size();j++){
	       cout<<count[j]<<" ";
	   }
	    cout<<endl;
		count.clear();
	}
	return 0;
}
