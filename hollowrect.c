/*
5
*****
*   *
*****

8
********
*      *
*      *
*      *
********

*/

#include<stdio.h>
void main(){
    int i, n;
    scanf("%d", &n);
    for (i = 0; i <= n/2;i++){
        if(i==0 || i==n/2){
            for (int j=0; j < n;j++){
                printf("*");
            }
        }
        else{
            for (int j=0; j < n;j++){
                if(j==0 || j==n-1)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
}