/*
4
****
***
**
*

8
********
*******
******
*****
****
***
**
*

*/

#include<stdio.h>
void main(){
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <=n ;i++){
            for (int j=n; j >= i;j--){
                printf("*");
            }
        printf("\n");
        }
}