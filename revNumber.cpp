#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rem,rev = 0;
    while(num!=0){
    rem =  num % 10;
    rev = rev*10+rem;
    num/=10;
    }
    printf("%d",rev);
}