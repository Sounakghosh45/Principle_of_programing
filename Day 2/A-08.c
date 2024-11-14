#include <stdio.h>
#include<string.h>
int main() {
    char str[10];
    int count=0,cons=0;
    printf("Enter a string: ");
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
                break;
            default:
                cons++;
        }

    }
    printf("%d is total vowel and %d is total consonant",count,cons);
}