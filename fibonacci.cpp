#include <stdio.h>
int main(){

    int num, sum = 0, a = 0, b = 1;
    scanf("%d",&num);

    for(int x = 1; x <= num; x++){
       if(sum <= num){
        printf("%d ", sum);
        a = b; 
        b = sum;
        sum = a + b; 
       }
    }
    return 0;
}