#include <stdio.h>

int palindrome(char *str) {
    int i, j;
    int temp = 1;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    j = len - 1;

    for (i = 0 ; i < (len / 2); i++) {
        if (str[i] != str[j]) {
            temp = 0;
            break;
        }
        j--;
    }
if (temp) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    palindrome(str);

    return 0;
}