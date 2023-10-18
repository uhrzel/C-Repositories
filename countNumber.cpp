#include<stdio.h>
int main(){
    int n, counter = 0;
    scanf("%d",&n);

    while(n != 0){
        n = n / 10;
        counter++;
    }
    printf("%d",counter);
}