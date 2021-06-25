// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b,int c, int d){
    int max_val;
    if(a>b && a>c && a>d){
            max_val = a;
    }
    else if(b>a && b>c && b>d){
        max_val = b;
    }
    else if(c>a && c>b && c>d){
        max_val = c;
    }
    else{
        max_val = d;
    }
    return (max_val);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}