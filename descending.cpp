
#include<bits/stdc++.h>
using namespace std;
auto start = chrono::steady_clock::now();

void getms(){
 auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
}
int main(){
   int arr[] = {1,2,3,4,5,6,7};
   int len = sizeof(arr) / sizeof(int);

   int temp = 0;
   for(int i = 0; i < len; i++){
    for(int x = i + 1; x < len; x++){
        if(arr[i] < arr[x]){
            temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;   
        }
    }
   }
   for(int x = 0; x < len; x++){
    cout<<arr[x]<<endl;
   }
   getms();

}