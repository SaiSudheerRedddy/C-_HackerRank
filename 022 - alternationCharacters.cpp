int alternatingCharacters(string s) {
    int count;
    for(int i=s.length()-1;i>0;i--){
        if(s[i] == s[i-1]){
            s.erase(s.begin() + (i-1) );
            count++;
            i++;
        }
    }
    return count;
}
