#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	    int a, b;
    float c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    int sumint = 0;
    sumint = a + b;
    float sumfloat = 0.0;
    sumfloat = c + d;

    int difint = 0;
    difint = a - b;
    float diffloat = 0.0;
    diffloat = c - d;


    printf("%d %d\n", sumint,difint);
    printf("%0.1f %0.1f", sumfloat,diffloat);
     
    return 0;
}