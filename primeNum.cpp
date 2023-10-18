#include<stdio.h>
int main(){
    int num = 6;
    int x;
    for(x =2; x <= num / 1; x++){
        if(num % 2 == 0){
            break;
        }

    }
    if(x > num / 2){
        printf("%d is a prime number ",num);
    }
    else{
         printf("%d is not a prime number ",num);
    }
}