#include<stdio.h>
void getSequenceofNumber(int first, int last, int arr[]){
    if(last <= 5){
        for(int x = first; x <= arr[last]; x++){
            printf("%d ",x);
        }
    }
    else{
        printf("error");
    }
}
int main(){
    int num, array[] =  {100,21,64,356,764,879};
    scanf("%d",&num);

    int first = num;
    int last = num % 10;
    while(first >= 10){
        first/=10;
    }
    getSequenceofNumber(first,last,array);
    
}