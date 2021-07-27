#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    for(int row = 0;row<x;row++){
        if(arr[row][y] == 1){
            return false;
        }
    }


    int row = x;
    int colum = y;
    while(row>=0 && colum>=0){
        if(arr[row][colum] == 1){
            return false;
        }
        row--;
        colum--;
    }

    row = x;colum = y;
    while(row>=0 && colum<n){
        if(arr[row][colum] == 1){
            return false;
        }
        row--;
        colum++;
    }
    return true;
}

bool checkPlace(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    
    for(int col = 0;col<n;col++){
        cout<<x<<" "<<col<<endl;
        if(isSafe(arr,x,col,n )){
            
            arr[x][col] = 1;
            cout<<x<<" "<<col<<" "<<arr[x][col]<<endl;
            if(checkPlace(arr,x+1,n)){
                return true;
            }
            arr[x][col] = 0;

        }
    }
    return false;
}




int main(){
    int n;
    cin>>n;

    int** arr = new int*[n];


    for(int i=0;i<n;i++){
        arr[i] = new int[n];
        for(int j = 0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    cout<<checkPlace(arr,0,n)<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
