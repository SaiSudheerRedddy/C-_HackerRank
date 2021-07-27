#include<iostream>
using namespace std;


void printPermute(string s, int i=0){
    if(i == s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        printPermute(s,i+1);
        swap(s[i],s[j]);
    }
}


int main(){
    string s;
    int i=0;
    cin>>s;
    printPermute(s,i);
    return 0;
}
