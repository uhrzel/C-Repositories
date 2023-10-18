#include <stdio.h>
int mataas(int a, int b, int c){
    int val;
    if(a > b && a > c){
        val = a;
    }
    else if(b > a && b > c){
        val = b;
    }
    else{
        val = c;
    }
    return val;
}
int main(){
    int a,b,c;
 
    scanf("%d %d %d",&a,&b,&c);
    int maxVal = mataas(a,b,c);
    printf("mataas = %d", maxVal);
}