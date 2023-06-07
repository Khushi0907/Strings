#include <stdio.h>

int removeCharacter(char str[], char ch)
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == ch){
            for (j = i; str[j] != '\0'; j++){
                str[j] = str[j + 1];
            }
        }
    }
    if (str[i] == '\0'){
        printf("Character does not exist.");
    }
    else{
        printf("Modified string :- %s", str);
    }
}
int main()
{
    char str[20], ch;
    printf("Enter a string :- ");
    scanf("%[^\n]s", str);
    printf("Enter the character to remove :- ");
    scanf(" %c", &ch);
    removeCharacter(str, ch);
}