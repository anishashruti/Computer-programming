#include<stdio.h>
#include<string.h>
void main()
{
char* sort(char arr[10]);
char an[10][10],str[10][10],str1[10][10],strin[10];
int i,j,n;
printf("Enter the number of strings:");
scanf("%d",&n);
printf("Enter %d strings:",n);
for(i=0;i<n;i++)
{
scanf("%s",str[i][10]);
//strcpy(strin[10],str[i][10]);
strin[10]=str[i][10];
str1[i][10]= sort(*char strin[10]);
}
for(i=0;i<n;i++)
{
for(j=i+1;i<n;j++)
{
if(str1[i][10]==str1[j][10])
{
an[i][10]=str1[i][10];
an[j][10]=str1[j][10];
}
}
}
}
char* sort(char arr[10])
{
int len,temp,i,j;
len=strlen(arr);
for(i=0;i<len;i++)
{
for(j=i+1;j<len;j++)
{
if(arr[i]>arr[i])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
return(arr);
}
