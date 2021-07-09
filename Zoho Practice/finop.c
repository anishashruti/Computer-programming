#include<stdio.h>
// int main(){
//     int y = 3;
//     int z = (--y) + (y = 10);
//     printf("%d\n",z);
// }

void main(){
    int h = 8;
    int b = h++ + h++ + h++;
    printf("%d\n", h);
}