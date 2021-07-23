vector<int> rotLeft(vector<int> a, int d) {
    if(d<1 && d> a.size()){
        return a;
    }
    for(int i=0;i<d;i++){
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    return a;
}
