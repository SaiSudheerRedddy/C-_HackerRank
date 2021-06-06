#include<iostream>
using namespace std;

int find(int n,int c1,int c2){
    if(c1 == c2){
        cout<<c1<<endl;
		return 0;

    }
    
    return(find(n,c1+1,  c2-1));
}

int main(void) {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
        
	    if(n%2 != 0){
	        find(n,1,n);
	    }
	}
	return 0;
}
