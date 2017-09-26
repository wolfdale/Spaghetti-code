#include <stdio.h>

int main(void) {
	//Number of set bits
	//brain keringham algo
	int num = 65;
	int count = 0;
	while(num>0){
		num = num&(num-1);
		count++;
	}
	printf("%d",count);
	
	return 0;
}
