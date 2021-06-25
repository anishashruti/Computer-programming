#include<stdio.h>
#include<string.h>
void main()
{
char str[25],str1[10][25],len[5];
int i,j,k,n;
printf("Enter the string:");
scanf("%s",&str[25]);
n=strlen(str);
printf("%d",n);
j=1;
len[0]=0;
for(i=0;i<n;i++)
{
if(str[i]==' ')
{
len[j]=i;
j++;
}
}
for(i=0;i<j;i++)
{
for(k=len[i];k<len[i+1];k++)
{
str1[i][k]=str[k];
}
}
for(i=0;i<j;i++)
{
printf("%s",&str1[i][10]);
}
}
