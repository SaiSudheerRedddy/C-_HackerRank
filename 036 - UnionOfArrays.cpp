// Given two array find the union of two arrays.
// Union of array means that we need to fin d the 
// distinct elements of both the arrays.

// Set doesnt not contain duplicate elements
// so we can use set ds to store the distinct values of an array
// Union is the set of distinct numbers present in both the arrays.

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> s1;
        for(int i=0;i<n;i++){
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s1.insert(b[i]);
        }
        return s1.size();
    }
};
