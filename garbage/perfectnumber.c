#include<stdio.h>

int main() {
   int num, i = 1, sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   while (i < num) {
      if (num % i == 0) {
         sum = sum + i;
      }
      i++;
   }

   if (sum == num)
      printf("%d is a Perfect Number", i);
   else
      printf("%d is Non Perfect Number", i);

   return 0;
}
