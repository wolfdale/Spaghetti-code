#include<stdio.h>
int part(int a[],int l,int h);
void swap(int *a,int *b);
void quicksort(int a[],int l,int h);
int main()
{
    int a[100],n,i;
    printf("Enter the size of Array");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

void quicksort(int a[],int l,int h)
{
    int p;
    if(l<h)
    {
        p=part(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}


void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int part (int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
    int j;
    for ( j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
