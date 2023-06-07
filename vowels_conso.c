#include<stdio.h>

int main(){
    char str[50];
    int i, count_vowel=0, count_conso=0;
    printf("Enter the string :-\n");
    scanf("%s",str);
    for(i=0;str[i];i++){
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')||(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')){
            count_vowel++;
        }
        else{
            count_conso++;
        }
    }
    printf("The number of vowels :- %d\n",count_vowel);
    printf("The number of consonants :- %d\n",count_conso);
}