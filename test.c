#include <stdio.h>

int main() {
   int amount;
   printf("Enter price of the grocery: ");
   scanf("%d", &amount);

   if (amount >= 2000) {
      int discount = amount * 0.2; 
      int totalAmount = amount - discount;
      printf("Total amount: %d \n", totalAmount);
   }
   else {
      printf("Amount: %d\n", amount);
   }

   return 0;
}

