void moveZeroes(int* nums, int numsSize) {
    int count=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(*(nums+i) != 0)
        {
            *(nums+count) = *(nums+i);
            count++;
        }
    }
    while(count<numsSize)
    {
        *(nums+count)=0;
        count++;
    }
    
    
    return *nums;
}
