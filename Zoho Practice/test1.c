#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf("%d",&n);
//to print the first 0
for(j = n-1; j < n-1; ++j)
{
printf(" ");
}
//pyramid begins
for(i = 1; i <= n; ++i, k = 0)
{
//Each line in the pyramid

//the spaces before the numbers begin
for(j = 1; j <= n-i; ++j)
{
printf(" ");
}
    //The numbers in the pyramid
    for (int h = n - (i - 1); h < n; h++)
    {
        if(h%2==0)
            printf("%%");
        else
            printf("#");
    }
    //Central 0
    printf("%%");
    //The reverse of the numbers
    for (int h = n-1; h>=n - (i - 1); h--)
    {
        if(h%2==0)
            printf("%%");   
        else
            printf("#");
    }
//going to the next line
printf("\n");
}

return 0;
}