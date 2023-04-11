#include <stdio.h>

int main() {
   int n, original_n, i, factorial, sum = 0;

   printf("Enter a positive integer: ");
   scanf("%d", &n);
   original_n = n;

   // find the sum of factorials of each digit
   while(n != 0) {
      int digit = n % 10;
      factorial = 1;
      
      for(i=1; i<=digit; ++i) {
         factorial *= i;
      }

      sum += factorial;
      n /= 10;
   }

   // check if the sum of factorials is equal to the original number
   if(sum == original_n) {
      printf("%d is a strong number.", original_n);
   }
   else {
      printf("%d is not a strong number.", original_n);
   }

   return 0;
}

