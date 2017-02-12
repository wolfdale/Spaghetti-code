#include <stdio.h>
#include<stdlib.h>
//Global
int DEBUG_ENV = 0;
int main()
{
    char* getEnv;
    char *env = "DEBUG";
    getEnv = getenv(env);
    DEBUG_ENV = atoi(getEnv);
    printf("Value is = %d\n",DEBUG_ENV);
    caller();
}
