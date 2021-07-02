#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    //Complete the code to calculate the sum of the five digits on n.
    
    // sprintf(snum, "%d", n);
    // for (int i = 0; i < 5;i++)
    // {
    //     // printf("%c\n", snum[i]);
    //     int no = 0;
    //     no = (int)(snum[i]);
    //     printf("%d/n", no);
    // }
    int sum_no = 0;
    while(n!=0){
        int rem = 0;
        rem = n % 10;
        n = n / 10;
        sum_no += rem;
    }
    printf("%d", sum_no);
    return 0;
}