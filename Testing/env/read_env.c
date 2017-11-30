#include <stdio.h>
#include<stdlib.h>
#include"runner.h"
//Global
int DEBUG_ENV = 0;
	
int main()
{
    char* getEnv;
    char *env = "DEBUG";
    getEnv = getenv(env);
    DEBUG_ENV = atoi(getEnv);
    #ifdef DEBUG_MAC_ENV
    printf("Value is = %d\n",DEBUG_ENV);
    #endif
    caller();
}

