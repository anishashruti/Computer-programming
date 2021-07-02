/*
Write a program to reverse the given string and if a character is not alphanumeric then it must remain same
Eg:  Input: my house is on fire!!
     Output: erif no si esuoh ym!!
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    char result[50];
    gets(s);
    char *word = strtok(s," ");
    strcpy(result,strcat(result, word));
    printf("%s", result);
    while( word != NULL ) {

        for (int i =  strlen(word)-1; i>=0;i--){
            printf("%c", word[i]);
        }

        printf(" ");
        
        word = strtok(NULL, " ");
   }
}