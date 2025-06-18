void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=m,j=0,t;
    if(n==0){
    }
    else if(m==0){
        for(j=0;j<n;j++){
            nums1[j]=nums2[j];
        }
        
    }
    else{
    for(j=0;j<n;j++){
        nums1[i]=nums2[j];
        i++;
    }
    for(i=0;i<m+n-1;i++){
        for(j=0;j<m+n-1-i;j++){
            if(nums1[j]>nums1[j+1]){
                t=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=t;
            }
        }
    }
   
}
}