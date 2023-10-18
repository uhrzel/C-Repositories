#include <stdio.h>

int main(){
    int array[] = {10,12,14,9,2,5};
    int temp = 0;
    int sz = sizeof(array) / sizeof(int);
    for(int x = 0; x < sz; x++){
        for(int j = x + 1; j < sz; j++){
            if(array[j] <  array[x]){
                temp = array[x];
                array[x] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int x = 0; x < sz; x++){
        printf("%d ",array[x]);
    }
}