int makeAnagram(string a, string b) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    int count = 0;
    for(int i=0;i<a.length();i++){
        freq1[a[i] - 'a']++;
    }
    for(int i=0;i<b.length();i++){
        freq2[b[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        count += abs(freq1[i] - freq2[i]);
        cout<<freq1[i]<<" "<<freq2[i]<<endl;;
    }
    return count;
    
}
