/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    long result = 0;
    long freq = 0;
    long rem_freq = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a'){
            freq++;
        }
    }
    if(s.length()>= 1 && s.length()<=100){
        cout<<s.length();
        result = n/s.length();
    }
    for(int i = 0;i<(n%s.length());i++){
        if(s[i] == 'a'){
            rem_freq++;
        }
    }
    return (result*freq) + rem_freq;

}
