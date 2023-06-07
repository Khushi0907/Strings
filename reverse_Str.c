#include<stdio.h>

int main(){
     char str[100];
     char temp;
     int i, j, len=0;

     printf("Enter a string:-");
     scanf("%[^\n]s", str);
     while (str[len] !='\0'){
         len++;
     }
     j=len-1;
     for(i=0; i<j; i++){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
     }
     printf("Reversed string:-%s\n", str);

     return 0;

}