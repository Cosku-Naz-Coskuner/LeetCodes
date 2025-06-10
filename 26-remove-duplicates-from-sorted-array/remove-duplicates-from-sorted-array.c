int removeDuplicates(int* nums, int numsSize) {
    int i,j;
    int k=0;
    int temp[numsSize]={};

    for(i=0;i<numsSize;i++){
        if(nums[i]!=101){
            temp[k]=nums[i];
            k++;
        }
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                nums[j]=101;
            }
        }
    }

    for(i=0;i<k;i++){
        nums[i]=temp[i];
    }

    return k;


}