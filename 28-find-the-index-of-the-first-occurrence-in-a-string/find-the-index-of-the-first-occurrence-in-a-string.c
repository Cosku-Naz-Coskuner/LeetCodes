int strStr(char* haystack, char* needle) {
    char* pos= strstr(haystack,needle);

    if (*needle == '\0') return 0;

    if(pos==NULL){
        return -1;
    }else{
        return pos - haystack;
    }

    
}