// Given the start point and end point u need to print if the rat will reach the cheese or no
// in the given grid.


#include<iostream>
using namespace std;

int findPath(int n, int *arr,int i_src, int j_src, int i_dest, int j_dest){
    if(i_src -1 == i_dest && j_src-1 == j_dest){
        return 1;
    }
    if(*((arr + (i_src +1)*n)+j_src) == 1){
        return findPath(n,arr,i_src+1,j_src,i_dest,j_dest);
    }else if(*((arr + i_src * n) + (j_src+1)) == 1){
        return findPath(n,arr,i_src,j_src+1,i_dest,j_dest);
    }else{
        return 0;
    }

}

int main(){
    int n,temp,i_dest,j_dest,i_src,j_src;
    cin>>n;
    int arr[n+2][n+2];
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++)
        arr[i][j] = 0;
    }
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n; j++){
            cin>>arr[i][j];
        }
    }
    cin>>i_src>>j_src>>i_dest>>j_dest;
    cout<<"Maze = "<<endl;
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int res = findPath(n+2,(int *)arr,i_src,j_src,i_dest,j_dest);
    if(res == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}
