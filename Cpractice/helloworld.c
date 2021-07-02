#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    char s1[100];
    char str[20];
    char str1[20];
    // ways to get string as an input 
    gets(str);
    fgets(str1, 20, stdin);
    scanf("%[^\n]%*c", &s);
  	//. But, it accepts string only until it finds the first space.
    scanf("%s", s1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("%s\n", s);
    printf("%s\n", s1);
    printf("%s\n", str);
    printf("%s\n", str1);
    return 0;
}