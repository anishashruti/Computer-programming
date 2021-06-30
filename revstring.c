//Reverse the string by keeping the special characters in the same position.
/*
1) Create a temporary character array say temp[]. 
2) Copy alphabetic characters from the given array to temp[]. 
3) Reverse temp[] using standard string reversal algorithm. 
4) Now traverse input string and temp in a single loop. Wherever there is an alphabetic character is input string, replace it with the current character of temp[].
Efficient Solution: 
Time complexity of the above solution is O(n), but it requires extra space, and it does two traversals of an input string. 
We can reverse with one traversal and without extra space. Below is the algorithm. 

input:
anishaa shruti**a.t
output:
taiturh saahsi**n.a

*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main(){
    char temp[50];
    char a[50];
    gets(a);
    int c=0;
    for (int i = 0; i < strlen(a);i++)
    {
        if(isalpha(a[i]))
        {
            temp[c] = a[i];
            c = c + 1;
        }
    }
    // printf("%s\n", temp);
    strrev(temp);
    // printf("%s", temp);
    int j = 0;
    for (int i = 0; i < strlen(a);i++)
    {
        if(isalpha(a[i]))
        {
            printf("%c", temp[j]);
            j = j + 1;
        }
        else{
            printf("%c", a[i]);
        }
    }
}