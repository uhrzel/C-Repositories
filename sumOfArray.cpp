#include<stdio.h>
#include <math.h>
#include <string.h>

void getVal(int arr[], int sz){
    int sum = 0;
      for(int i = 0; i < sz; i++){
        sum = sum + arr[i];
    }
    printf("Sum is: %d",sum);
}

int main(){
    int nums[5] = {1,2,3,4,5};
    int sum = 0;
   int sz = sizeof(nums) / sizeof(int);

getVal(nums,sz);

}