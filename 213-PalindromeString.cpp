// Link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int flag = 1;
	    int start = 0;
	    int end = S.length()-1;
	    while(start<end){
	        if(S[start] != S[end]){
	            flag = 0;
	        }
	        start ++;
	        end --;
	    }
	    return flag;
	}

};
