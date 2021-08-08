#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
// Recurssive program to return the nth element of the fibonacci sequence
int fib(int n){
int f[n + 2];
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
    for(i = 2; i <= n; i++)
    {     
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main()
{
    fastIO();
    int s = fib(50);
    cout << s;
    return 0;
}