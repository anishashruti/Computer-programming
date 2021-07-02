// /*
// Write a program to Generate a random 10 digit no? (No digits should repeat).
// First digit should be divisible by 1
// First 2 digits should be divisible by 2
// First 3 digits should be divisible by 3
// First 10 digits should be divisible by 10.

// a b c d e f g h i j
// _ _ _ _ _ _ _ _ _ _ 

// 1.a can be anything between[1-9]
// 2.a b should be even no.
// 3.a b c should be an odd no ie c should be odd.
// 4. j should be 0

// */

// #include<stdio.h>
// void main(){
//     int a,b,c;
//     int l[10] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
//     while(1){
//         int noList[10] = {0};
//         for (int i = 0; i <= 9;i++)
//         {
//             if(i!=0){
//                 noList[0] = i;
//             }
//             break;
//         }
//         for (int i = 0; i <= 9;i++)
//         {
//                 printf("%d", noList[i]);
//         }
//         printf("\n");
//         break;
//     }
//   }  


// /*
//             a = i;
//             if(i!=a){
//                 if(i%2==0)
//                 {
//                     noList[1] = i;
//                     b = i;
//                 }
//                 if(i!=b){
//                     if(i%2!=0)
//                     {
//                     noList[2] = i;
//                     c = i;
//                     }
//                     if(i!=9){
//                         noList[9] = 0;
//                     }
//                 }

//             }

//             if(i!=a && i!=b && i!=c && i!=9)
//             {
//                 noList[i] = i;
//             }
//             break;
//         }
//         for (int i = 0; i <= 9;i++)
//         {
//             printf("%d", noList[i]);
//         }
//         printf("\n");
// */