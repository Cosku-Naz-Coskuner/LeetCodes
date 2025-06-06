int romanToInt(char* s) {

int nums[100]={};
int i=0,sum=0;
int current=0,next=0;

while(s[i]!='\0'){
switch (s[i]) {
            case 'I': nums[i] = 1; break;
            case 'V': nums[i] = 5; break;
            case 'X': nums[i] = 10; break;
            case 'L': nums[i] = 50; break;
            case 'C': nums[i] = 100; break;
            case 'D': nums[i] = 500; break;
            case 'M': nums[i] = 1000; break;
}
i++;
}

int len = i;
i=0;

while(i<len){
    current=nums[i];
    next=nums[i+1];
    if(current<next){
        sum=sum+(next-current);
        i=i+2;
        
    }
    else{
        sum=sum+current;
        i++;
    }
}


return sum;

}