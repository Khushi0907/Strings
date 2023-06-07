#include <stdio.h>


int main()
{
    char str[50];
    int i, count_alpha = 0, count_digit = 0, count_spe = 0;
    printf("Enter the string containing alphabets , digits and special characters:- \n");
    scanf("%s", &str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count_alpha++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count_digit++;
        }
        else
        {
            count_spe++;
        }
    }
    printf("Total number of digits : %d\n", count_alpha);
    printf("Total number of alphabets : %d\n", count_digit);
    printf("Total number of special characters : %d\n", count_spe);
}