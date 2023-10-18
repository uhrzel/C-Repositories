#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    int j;
    cout<<"Enter first name and lastname: ";
   getline(cin, str);

    int len = str.length();
    for(int i = 0, j = len - 1; i < j; i++, j-- ){
        swap(str[i],str[j]);
    }
    cout<<str<<endl;
    return 0;
}