#include <stdio.h>

char replaceLastOccurOfChar(char str[], char ch, char c) {
    int i,j=-1;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            j=i;
        }
    }
    if(j == -1){
        printf("Entered character does not exist in the string.");
    }
    else{
        str[j]=c;
        printf("Modified string :- %s", str);
    }
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
    
    replaceLastOccurOfChar(str, ch , c);
    
    return 0;
}