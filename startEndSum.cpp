#include<stdio.h>

int main(){
    int starting_number, ending_number;

    scanf("%d %d", &starting_number, &ending_number);
    int sum = 0;
    for(int x = starting_number; x<=ending_number; x++){
        sum = sum + x;
        
    }
    printf("%d",sum);

}
