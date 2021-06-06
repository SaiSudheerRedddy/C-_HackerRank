#include<iostream>
#include<cmath>
using namespace std;

int solubility(int x, int a, int b){
    int sol = a + (100 - x) * b;
    return (sol*10);
}

int main()
{
    int x,a,b,n;
    cin>>n;
    if(n>=1 && n<=1000)
    {
        for(int i=0;i<n;i++){
            cin>>x>>a>>b;
            if((x>=31 && x<=40) && (a>=101 && a<=120) && (b>=1 && b<=5)){
                int ans = solubility(x,a,b);
                cout<<ans<<endl;
            }
        }
    }
}
