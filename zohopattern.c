/*
4
    0
   404
  34043
 2340432
123404321

8
        0
       808
      78087
     6780876
    567808765
   45678087654
  3456780876543
 234567808765432
12345678087654321

*/
#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf("%d",&n);
//to print the first 0
for(j = 1; j < n+1; ++j)
{
printf(" ");
}
printf("0\n");
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
    for (int h = n - (i - 1); h <= n; h++)
    {
        printf("%d", h);
    }
    //Central 0
    printf("0");
    //The reverse of the numbers
    for (int h = n; h>=n - (i - 1); h--)
    {
        printf("%d", h);
    }
//going to the next line
printf("\n");
}

return 0;
}