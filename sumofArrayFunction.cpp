#include<iostream>
using namespace std;

int findSum(int array[], int size){
    
    int sum = 0;
    for(int x = 0; x < size; x++){
        sum+=array[x];
    }
    return sum;

}
int main()
{
    int array[5], sum = 0, num = 0, sz = 0;

    cout<<"Enter size: ";
    cin>>sz;

    cout<<"Enter "<<sz<< " numbers: "; 
    for(int i = 0; i < sz; i++){
        cin>>array[i];
    }
    int len = sizeof(array) / sizeof(int);

    int getVal = findSum(array, len );
    printf("Sum is: %d",getVal);
}
