#include <stdio.h>

char removeAllRepeatedChar(char str[], char ch) {
    int i, j= 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Modified string :- %s", str);
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string :- ");
    scanf("%[^\n]s", str);
    
    printf("Enter the character to remove :- ");
    scanf(" %c", &ch);
    
    removeAllRepeatedChar(str, ch);
    
    return 0;
}