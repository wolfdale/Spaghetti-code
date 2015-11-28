/*Size of structure without sizeof() operator */
#include<stdio.h>

struct student{
    int roll;
    char name[100];
    float marks;
};

int main(){

  struct student *ptr = 0;

  ptr++;
  printf("Size of the structure student:  %d",ptr);

  return 0;
}
