/*

4
****
****

8
********
********
********
********

*/

#include<stdio.h>
void main(){
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n/2;i++){
        for (int j=0; j < n;j++){
            printf("*");
        }
        printf("\n");
    }
}