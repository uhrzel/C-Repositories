#include<stdio.h>
int main(){
    int num,sum = 0, isDigit;
 scanf("%d",&num);

while(num > 0){
    isDigit = num % 10;
    num = num / 10;
    sum+=isDigit;   
}
 printf("%d",sum);
}