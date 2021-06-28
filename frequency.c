#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int a[10]={0};
    //Write your logic to print the tokens of the sentence here.
    // printf("%s", s);
    for (int i = 0; i < strlen(s);i++){
        if(isdigit(s[i])!=0){
            // printf("%d", 1);
            int d = (s[i]- '0');
            a[d] += 1;
        }
    }
    for (int i = 0; i <10;i++){
        printf("%d ", a[i]);
    }
    return 0;
}