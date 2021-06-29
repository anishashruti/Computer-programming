#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>  
bool ispalindrome(int n){
    int r,sum=0;    
    int temp=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(temp==sum)
        return (true);
    else
        return (false);
    return 0;  
}
void findIt(char *s){
    static int palcount = 1;
    bool x=false;
    char tsums[10];
    int tsum=0;
    char revs[10];
    int no = atoi(s);
    int rev = atoi(strrev(s));
    // printf("%d", (no+rev));
    tsum = no + rev;
    if(ispalindrome(tsum))
    {
        printf("It is a palindrome");
    }
    else{
        palcount++;
        itoa(tsum, tsums, 10);
        findIt(tsums);
        if(palcount>=5){
            printf("It is not a palindrome");
        }
    }
}
void main(){
    char s[10];
    scanf("%s", s);
    findIt(s);
        // printf(x ? "It is a palindrome" : "Not a palindrome");
}

