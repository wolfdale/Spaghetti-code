/*Set the value of i=20 & print it without changing main() function*/ 
#include<stdio.h>
int main()
{
	int i=10;
	fun();
	printf("%d",i);
}
/* Method 1 */
int fun(){

    #define fun() i = 20
    return 0;
    }

/* Method 2 */

/* Wander up the stack in integer pointers look for the number 10 & change it to 20.It's a local, the scope of which is the function - main.
 Compilers put it on the stack, the stack grows down.

Declare a local in fun(), mine's called 'i'.
 The address of fun():i is on the stack.
  There are only pointers above it: stack and code pointers.
  We can use this to say anything on the stack which has the value '10' is our initialised integer from main.
   We then write '20' to that address.
*/
/*
int fun()
{
int i;
int *p=&i;
int j;
for(j=0;*(p+j)!=10;j++){
;
}
*(p+j)=20;   /* Stack Frame size is j int pointers. */

}
*/
    
