#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector <int> n;
    int temp; // to store the temporary read object from the string stream
    char temp2;//to store the discarded ","
    while(ss>>temp){
        n.push_back(temp);
        ss>>temp2;
    } 
    // >> in while loop is used to read an object from the stringstream
    return n;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
