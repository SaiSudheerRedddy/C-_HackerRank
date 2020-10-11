#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    int l1 = a.size();
    int l2 = b.size();
    cout<<l1<<" "<<l2<<endl;
    string c = a+b;
    cout<<c<<endl;
    char temp1 = a[0];
    a[0] = b[0];
    b[0] = temp1;
    cout<<a<<" "<<b<<endl;
    return 0;
}