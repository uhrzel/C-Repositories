#include<stdio.h>
int main(){
    int num, count, fact = 1;
    printf("input: ");
    scanf("%d",&num);

    for(count = 1; count<= num; count++){
        fact = fact * count;
    }

    printf("Factorial of %d is: %d ", num,fact);
}



