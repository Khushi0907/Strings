#include <stdio.h>

char replaceAllOccurOfChar(char str[], char ch, char c) {
    int i;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            str[i]=c;
        }
    }
        printf("Modified string :- %s", str);
    
}

int main() {
    char str[100];
    char ch,c;
    
    printf("Enter a string :- ");
    scanf("%[^\n]s", str);
    
    printf("Enter the character to replace in the string :- ");
    scanf(" %c", &ch);
    
    printf("Enter with which character you want replacement :- ");
    scanf(" %c",&c);
    
    replaceAllOccurOfChar(str, ch , c);
    
    return 0;
}