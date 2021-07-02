/*
2 2 2
2 1 2
2 2 2

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    // for (int i = 0; i < (2 * n) - 1;i++){
    //     for (int j = 0; j < (2 * n) - 1;j++){
    //         if(j==0 || j==(2 * n) - 2 || i==0 || i==(2 * n) - 2){
    //             printf("%d ", n);     
    //         }
    //         else{
    //             printf("%d ", n - 1);
    //         }
    //     }
    //     printf("\n");
    // }
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
        return 0;
}