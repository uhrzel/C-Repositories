#include <stdio.h>
int main() {
    char *s = (char[]){
        (char)(0b01001000), (char)(0b01100101), (char)(0b01101100), 
        (char)(0b01101100), (char)(0b01101111), (char)(0b00101100), 
        (char)(0b00100000), (char)(0b01010111), (char)(0b01101111), 
        (char)(0b01110010), (char)(0b01101100), (char)(0b01100100), 
        (char)(0b00100001), 0
    };

    for (int i = 0; s[i]; ++i) {
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
