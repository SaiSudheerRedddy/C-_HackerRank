#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	int temp1 = 0, temp2 = 0,s1=0,s2=0;
	string s;
	cin>>n;
	for(int i =0;i<n;i++){
        cin>>m;
	    for(int j=0;j<m;j++){
	        cin>>s;
            temp1 = 0;
            temp2 = 0;
            s1 = 0;
            s2 = 0;
	        for(int k=0;k<s.length();k++){
	            if((s[k] < 'a' || s[k]> 'm')){
	                temp1 = 1;
	            }
	        }
	        for(int k=0;k<s.length();k++){
	            if(s[k] < 'N' || s[k]> 'Z'){
	                temp2 = 1;
                }
            }

	        if(temp1 == 1 && temp2 == 1){
	            s1 = 1;
	        }
	    }
	    if(s1 == 0){
	        cout<<"YES"<<endl;
	    }else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
