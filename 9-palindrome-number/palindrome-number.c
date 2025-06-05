bool isPalindrome(int x) {

long long rx=0;
int original=x;

if(x<0){
    return false;
}

while(x>0){
      int digit = x % 10;
        rx = rx * 10 + digit;
        x = x/10;

}


return original==rx;

    
}