//If there are only two(type ) of numbers to sort.

#include <stdio.h>
int main()
{
    int a[100],low,high,n,i;
    printf("Enter the length of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    while(low<high)
    {
        if(a[low]<a[high])
        {
            low++;

        }
        else
        {
            i=a[low];
            a[low]=a[high];
            a[high]=i;
            high--;

        }
    }
    printf("\nSorted order\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);}
    return 0;







}
