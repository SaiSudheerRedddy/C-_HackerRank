#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(auto i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        //candyType = std::unique(candyType.begin(),candyType.begin()+candyType.size());
        if(s.size()<=candyType.size()/2){
            return s.size();
        }
        return candyType.size()/2;
        
    }
};

