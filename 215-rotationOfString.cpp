// Find if a string is a rotated string of given string. 

#include<iostream>
#include<string>
using namespace std;


string findRotation(string s1, string s2) {
    string combined = s1 + s1;
    size_t found  = combined.find(s2);
    if( found == string::npos) {
        return "NO";
    }else{
        return "YES";
    }
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<findRotation(s1,s2)<<endl;
    return 0;
}
