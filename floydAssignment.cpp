#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char str[20] = "Arzel";
  char str2[20] = "john";

  strcat(str,str2);
  int len = strlen(str);
  if(len > 10){
    for(int x = 0; x<len; x++){
        printf("%c",tolower(str[x]));
    }
  }
  else{
    for(int z = 0; z < len; z++){
        printf("%c",toupper(str[z]));
    }
  }
return 0;
}


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char str[] = "arzelasjjsjs";
  int counter = 0;

  for(int x = 0; str[x]!='\0'; x++){
    counter++;
  }
  printf("%d", counter);
}