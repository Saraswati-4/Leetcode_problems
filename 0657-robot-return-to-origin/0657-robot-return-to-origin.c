bool judgeCircle(char* moves) {
    int r=0,l=0,u=0,d=0;
    for(int i=0;moves[i]!='\0';i++){
        if(moves[i]=='U') u++;
        else if(moves[i]=='R') r++;
        else if(moves[i]=='D') d++;
        else if(moves[i]=='L') l++;
    }
    if(u==d && r==l) return 1;
    return 0;
}