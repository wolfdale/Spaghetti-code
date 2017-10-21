#include <stdio.h>

int getfirstocc(int a[],int low,int high,int key){
	if(high>=low){
	
	int mid =(low+high)/2;

	if(a[mid]==key && (key>a[mid-1] || mid == 0)){
		return mid;
	}
	if(a[mid]<key){
		getfirstocc(a,mid+1,high,key);
	}
	else{
		getfirstocc(a,low,mid-1,key);
	}
	}
	else{
		return -1;
	}
}

int getlastocc(int a[],int low,int high,int key){
	
	if(high>=low)
	{
		int mid =(low+high)/2;
		printf("==%d\n",mid);
		if(a[mid]==key && (key<a[mid+1] || mid == (high-1))){
			return mid;
		}
		if(a[mid]>key){
			getfirstocc(a,low,mid-1,key);
		}
		else{
			
			getfirstocc(a,mid+1,high,key);
		}
	}
	else{
		return -1;
	}
}
int main(void) {
	int a[10]={1,2,3,3,3,3,3,3,3,4,5,5,5,5};
	int i = getfirstocc(a,0,13,3);
	int j = getlastocc(a,0,13,3);
	printf("%d%d",i,j);
}
