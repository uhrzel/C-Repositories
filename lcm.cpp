#include<stdio.h>
int main(){
    int a,b;

    printf("Enter to digits: ");
    scanf("%d %d", &a,&b);

    int lcm = a > b ? a : b;
    
    while(true){
    if(lcm % a == 0 && lcm % b == 0){
        printf("LCM OF %d AND %d is: %d ", a,b,lcm);
        break;
      }
    }
}