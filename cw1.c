#include <stdio.h>

int main() {
   int i, j, flag;

   // loop through the range of 70 to 85
   for(i=70; i<=85; i++) {
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


