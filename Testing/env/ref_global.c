#include<stdio.h>
#include"runner.h"
int caller(){
	extern int DEBUG_ENV;
	printf("DEBUG-->%d\n",DEBUG_ENV);
	#ifdef DEBUG_MAC_ENV
	printf("Printing Trace..");
	#endif
}
