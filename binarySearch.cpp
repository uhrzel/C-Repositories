#include <stdio.h>

int binarySearch(int sorted[],int start, int end, int target){
    int midIndex = (start + end) / 2; //get the middle index
    int midElement = sorted[midIndex]; // get the middle value
    if(start > end ) return -1; // if start is greater than end invalid
    if(target == midElement) return midIndex; //return midIndex
    if(target < midElement){
        return binarySearch(sorted, start, midIndex - 1, target); //search middle element in the left side
    }
    else{
        return binarySearch(sorted,midIndex + 1, end, target);// search middle element in the right side
    }
}

int main(){
int arr[] = {1,2,3,4,5,6,7};
int result = binarySearch(arr,0,6,4);
printf("%d",result);
}