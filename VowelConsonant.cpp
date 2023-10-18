#include <bits/stdc++.h>

using namespace std;
void findVowelConsonant(char s){
    switch(s){
        case 'A':
        printf("Vowel");
        break;
        case 'a':
         printf("Vowel");
          break;
        case 'E':
         printf("Vowel");
          break;
        case 'e':
         printf("Vowel");
          break;
        case 'I':
         printf("Vowel");
          break;
        case 'i':
         printf("Vowel");
          break;
        case 'O':
         printf("Vowel");
          break;
        case 'o':
         printf("Vowel");
          break;
        case 'U':
         printf("Vowel");
          break;
        case 'u':
         printf("Vowel");
          break;
          default:
          printf("Consonants");

    }

}
int main(){
    char ch;

    printf("Enter character: ");
    scanf("%c",&ch);
    findVowelConsonant(ch);

    return 0;
}
