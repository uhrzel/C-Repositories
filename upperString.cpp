#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include  <stdlib.h>

void str_lower(char str[]){
    char ch[100];
    int len = strlen(str);
    for(int i =- 0; i < len; i++){
        ch[i] = toupper(str[i]);
    }
    printf("%s",ch);
}

int main() {

    char str[100];
    printf("Enter string: ");
   fgets(str,100,stdin);
    fflush(stdin);
    str_lower(str);
    return 0;
}
