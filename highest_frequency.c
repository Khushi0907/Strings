#include<stdio.h>

int checkFrequency(char str[],char ch){
    int i,count=0;
    for(i=0;str[i] != '\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
        printf("The frequency of %c is %d",ch,count);
}

int main(){
    char str[30],ch;
    printf("Enter a string:-");
    scanf("%[^\n]s",str);

    printf("Enter a character to check its highest frequency:-");
    scanf(" %c",&ch);

    checkFrequency(str,ch);
    
}