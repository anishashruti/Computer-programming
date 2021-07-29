// C Program to demonstrate use of bitwise operators
// bitwise operations on them as given below:
// 1. d = a ^ a
// 2. e = c ^ b
// 3. f = a & b
// 4. g = c | (a ^ a)
// 5. e = ~e
#include <stdio.h>
int main()
{
    unsigned int a = 4, b = 8,c=2;
    int d, e, f, g;
    // The result is 00000001
    d = a ^ a;
    printf("%d\n",d);
    e = c ^ a;
    printf("%d\n",e);
    f = a & b;
    printf("%d\n",f);
    g = c | (a ^ a);
    printf("%d\n",g);
    e = ~e;
    printf("%d\n",e);
  
    return 0;
}