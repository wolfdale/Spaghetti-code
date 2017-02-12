#include<stdio.h>
int caller(){
	extern int DEBUG_ENV;
	printf("DEBUG-->%d",DEBUG_ENV);
}
