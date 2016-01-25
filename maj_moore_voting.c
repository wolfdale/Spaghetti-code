//Assumption made majority elememnts always exits ... if this assumption is not made ..make sure to count a[maj] again and check if
//its more than n>2;

int majorityElement(int* nums, int numsSize) {
     
    //moors voting algo
    
    int maj=0; int count=1;
    int i;
    
    //search candidate
    for(i=0;i<numsSize;i++)
    {
        if(*(nums+i) == *(nums+maj))
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            maj=i;
            count=1;
            
        }
    }
    
   return *(nums+maj);

}
