#include <stdio.h>

int main() {
   int i, j, n, flag;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("Prime numbers between 0 and %d are: ", n);

   // loop through the range of 2 to n
   for(i=2; i<=n; i++) {
      // assume the number is prime at first
      flag = 1;
      
      // check if the number is divisible by any number from 2 to i-1
      for(j=2; j<i; j++) {
         if(i%j == 0) {
            flag = 0;
            break;
         }
      }

      // if the number is prime, print it
      if(flag == 1) {
         printf("%d ", i);
      }
   }

   return 0;
}

