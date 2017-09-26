#include <stdio.h>

void checkpalin(int num){
	//Reverse the number
	int temp = num;
	int rev = 0;
	if(num<0){
		num = -num;
	}
	while(temp>0){
		rev = temp%10 + rev*10;
		temp = temp/10;
	}
	if(rev==num){
		printf("Yes");
		printf("%d",rev);
		return;
	}
	printf("No");
	printf("%d\n",rev);
	printf("%d\n",num);

}

int main(void) {
	
	int num = 123321;
	
	checkpalin(num);
	
	
	return 0;
}
