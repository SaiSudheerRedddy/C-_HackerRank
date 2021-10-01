// Print all the duplicate characters in a string. 

#include<iostream>
#include<vector>
#include<map>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;


void printDuplicates(string s){
    map<char, int> frequency;
    for(int i=0;i<s.length();i++){
        frequency[s[i]]++;
    }
    for(auto it:frequency){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }cout<<endl;
}


int main(){
    string s;
    cin>>s;
    printDuplicates(s);
    return 0;
}
