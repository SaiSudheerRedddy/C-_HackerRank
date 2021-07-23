int countingValleys(int steps, string path) {
    int seaLevel = 0;
    int flag = 0;
    int count = 0;
    for(int i=0;i<steps;i++){
        if(path[i] == 'D'){
            seaLevel += -1;
        }else{
            seaLevel += 1;
        }
        if(seaLevel <0){
            flag = 1;
        }
        if(flag == 1 && seaLevel == 0){
            count ++;
            flag = 0;
        }
    }
    return count;

}
