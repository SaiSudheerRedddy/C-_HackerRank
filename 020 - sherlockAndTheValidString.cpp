string isValid(string s) {
    if(s.length()<= 1 && s.length()>= 100000){
        return "NO";
    }
    int chances=1, arr[27] = {0},min=INT_MAX;
    for(int i=0;i<s.length();i++){
        
        arr[(s[i] - 'a')]++;
        // cout<<arr[s[i] - 'a']<<" "<<s[i]<<endl;
    }
    sort(arr,arr+27);
    int max = *max_element(arr,arr+27);
    int max_count = 0;
    for(int i=0;i<27;i++){
        cout<<arr[i]<<endl;
        if(arr[i] == max){
            max_count ++;
        }
        if(arr[i]<min && arr[i] != 0){
            min = arr[i];
        }
    }
    int min_count = 0;
    for(int i=0;i<27;i++){
        if(arr[i] == min){
            min_count ++;
        }
    }
    cout<<max<<" "<<max_count<<endl;
    if(min == max){
        return "YES";
    }
    if(max_count == 1 && min_count == 1){
        return "NO";
    }
    if(max_count == 1 && max - min == 1){
        return "YES";
    }
    if(min_count == 1 && min == 1){
        return "YES";
    }
    return "NO";
}
