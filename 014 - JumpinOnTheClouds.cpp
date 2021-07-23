int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    int i=0;
    cout<<c.size()<<endl;
    while(i<c.size()-1){
        if(c[i+2] == 0){
            i = i+2;
            jumps++;
            cout<<i<<" ";
        }else if(c[i+1] == 0){
            jumps++;
            i+= 1;
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return jumps;

}
