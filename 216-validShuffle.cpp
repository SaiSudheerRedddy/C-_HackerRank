// Given two strings. find if the third string is a valid shuffle of the first two strings. 

#include<iostream>
#include<string>
#include<map>
using namespace std;


string validateShuffle(string s1, string s2, string s){
    map<char, int> frequency1;
    map<char, int> frequency2;
    int finalLength = s1.length() + s2.length();
    if(s.length() != finalLength){
        return "Invalid";
    }
    for(int i=0;i<s1.length();i++){
        frequency1[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        frequency1[s2[i]]++;
    }
    for(int i=0;i<s.length();i++){
        frequency2[s[i]]++;
    }
    int count = 0,flag = 1;
    for(int i=0;i<s.length();i++){
        if(frequency2[s[i]] == frequency1[s[i]]){
            count += frequency2[s[i]];
        }else{
            flag = 0;
            break;
        }
    }
    if(flag == 1 && (count == s.length())){
        return "Valid";
    }
    return "Invalid";
    
}

int main(){
    string s1, s2,s;
    cin>>s1>>s2;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        cout<<validateShuffle(s1,s2,s)<<endl;
    }
    return 0;
}
