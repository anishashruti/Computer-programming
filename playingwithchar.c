//You have to print the character ch in the first line. Then print string s in next line. In the last line print the sentence, sen.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //char as input
    //printf("Enter a char\n");
    scanf("%c", &ch);
    //printf("Enter a string\n");
    scanf("%s", s);
    //printf("Enter a sentence\n");
    scanf("\n");
    scanf("%[^\n]%*s", sen);
    scanf("\n");

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s", sen);
    return 0;
}