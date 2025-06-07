char* longestCommonPrefix(char** strs, int strsSize) {

    int i; //kelime checker
    int a, harfsize; //harf checker
    char prefix[200];
    int flag=1;

    harfsize = strlen(strs[0]); 
    
    for(a=0;a<harfsize;a++){
     for(i=0;i<strsSize-1;i++){
        if(strs[i][a]==strs[i+1][a]){
            continue;
        }
        else{
            flag=0;
            break;
        }
        }
        if(flag==0){
            break;
        }
    }
   
    if(a==0){
        prefix[0]='\0';

    }
    else{
        strncpy(prefix,strs[0],a);
        prefix[a] = '\0';
    }
    

 char* result = (char*)malloc(strlen(prefix) + 1);
    strcpy(result, prefix);
    return result;
}