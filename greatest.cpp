#include <stdio.h>
void greatest(int a, int b){
    if(a > b){
        printf("%d is the greatest", a);
    }
    else{
        printf("%d is the greatest", b);
    }
}
int main(){

    int a = 5, b = 10;
    greatest(a,b);
    return 0;
}