#include<iostream>
using namespace std;
int main(){
    int num;
    printf("Enter a year: ");
    scanf("%d",&num);

    if(num % 4 == 0){
        printf("%d is a Leap year",num);
    }
    else{
        printf("%d is not a leap year",num);
    }

}