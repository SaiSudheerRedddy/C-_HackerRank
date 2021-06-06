#include <iostream>
#include <cstdio>
#include <iostream>     
#include <iomanip> 
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<< b <<"\n"<< c<<"\n";
    printf("%.3f \n",d);
    std::cout<< std::fixed << std::setprecision(9) <<e;

    // Complete the code.
    return 0;
}
