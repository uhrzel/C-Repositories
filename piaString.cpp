#include<stdio.h>
#include<string.h>
#include  <ctype.h>
int main(){
    int arr[] = {1,2,3,4,5};
    char str[] = "pialove";

    int len = strlen(str);
    int sum = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++){
        sum = sum + i;
    }

    char str1[] = "mAtaAs ang ArrAy";
    char str2[] = "Mataas ang string";
    if(sum > len){
        for(int x = 0; str1[x]!='\0'; x++){
            printf("%c",toupper(str1[x]));
        }
    }
    else{
        for(int j = sizeof(str2)/sizeof(char) - 1; j >= 0; j--){
            printf("%c",str2[j]);
        }
    }
}