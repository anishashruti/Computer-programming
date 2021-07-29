#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    // simple approch-o(n) from 2 to n-1 iterations
    // iteration from 2 to sqrt of n
    cout << isPrime(31);
    return 0;
}