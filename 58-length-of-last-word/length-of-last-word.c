int lengthOfLastWord(char* s) {
    int len;
    char* token;

    token=strtok(s," ");

    while(token!=NULL){
        len=strlen(token);
        token=strtok(NULL," ");
    }
    
    return len;
    
}