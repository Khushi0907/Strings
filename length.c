// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{

    int len = 0;
    char str[20];
    printf("Enter the string:-\n");
    scanf("%s", &str);
    len = strlen(str);
    printf("The length of the string is %d", len);

    return 0;
}