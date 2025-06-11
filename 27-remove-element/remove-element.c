int removeElement(int* nums, int numsSize, int val) {
    int i,j;
    int k=0;

    if(numsSize==0) return 0;
    
    int temp[numsSize]={};

    for(i=0;i<numsSize;i++){
        if(nums[i]==val){
           nums[i]=101;
        }
         if(nums[i]!=101){
            temp[k]=nums[i];
            k++;
        }
    }

    for(i=0;i<k;i++){
        nums[i]=temp[i];
    }

    return k;


}