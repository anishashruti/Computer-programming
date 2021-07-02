/*
4
****
* *
**
*

8
********
*     *
*    *
*   *
*  *
* *
**
*

*/

#include<stdio.h>
void main(){
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <=n ;i++){
                if(i==n||i==1)
                {
                    for (int j=n; j >= i;j--){
                    printf("*");
                    }
                }
                else
                {
                    for (int j=n; j >= i;j--){
                        if(j==n || j==i)    
                            printf("*");
                        else{
                            printf(" ");
                        }
                    }

                }
            printf("\n");
    }
}