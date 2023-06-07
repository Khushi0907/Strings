#include <stdio.h>

int firstOccurence(char str[], char ch, int pos) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            pos = i + 1;  
            break;
        }
    }

    if (pos == 0) {
        printf("%c not found in string.\n", ch);
    } else {
        printf("%c found at position %d.\n", ch, pos);
    }
}

int main() {
    char str[20], ch;
    int pos = 0;
    
    printf("Enter a string:- ");
    scanf("%s", str);

    printf("Enter a character to find in the string:- ");
    scanf(" %c", &ch);  

    firstOccurence(str, ch, pos);

    return 0;
}