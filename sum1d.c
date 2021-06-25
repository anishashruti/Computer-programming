#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int size;
    int t=0;
    scanf("%d",&size);
    int *ar = malloc(size * sizeof(*ar));
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
        t+=ar[i];
    }
    printf("%d", t);
    return 0;
}