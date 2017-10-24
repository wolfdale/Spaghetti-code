#include <stdio.h>
void push(int key,int a[],int *top){
	(*top)++;

	a[*top] = key;
	
}
int pop(int a[],int *top){
	 int t = a[*top];
	(*top)--;
	return t;
}
int main(void) {
	int a[20];
	int top = -1;
	int num = 123;
	int rev=0;
	int i  = 1;
	while(num!=0){
		push(num%10,a,&top);
		num = num/10;
	}

	while(top != -1){
		rev = rev + pop(a,&top)*i;
		i=i*10;
	
	}
	printf("%d\n",rev);
	return 0;
}
