#include<stdio.h>

int checkFrequency(char str[]){
    int i, fre[26]={0};
    for(i=0;str[i] != '\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            fre[str[i]-'A']++;
        }
         if(str[i]>='a'&&str[i]<='z'){
            fre[str[i]-'a']++;
        }
        
    }
    for(i=0;i<26;i++){
        if(fre[i] != 0){
            printf("The frequency of %c is %d",i+'a',fre);
        }
    }
}

int main(){
    char str[30],ch;
    printf("Enter a string:-");
    scanf("%[^\n]s",str);

    checkFrequency(str);
    
}