#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,m,temp,i,j;
    cin >> n >> q;
    vector<int> a[n];
    for(i = 0; i < n; i++){
        cin >> m;
        for(j = 0; j < m; j++){
            cin >> temp;
            a[i].push_back(temp);
        }
    }
    

    for(int k = 1; k <= q; k++){
        cin >> i >> j;
        cout << a[i][j] << endl;
    }   
    return 0;
}
