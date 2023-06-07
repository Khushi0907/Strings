#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);  //will read all characters until you reach \n.(scan-set ^\n)
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}