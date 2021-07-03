// Given an array arr of n positive integers. The task is to swap every ith element of the array with (i+2)th element.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int num[40];
    int size;
    cin >> size;
    for (int i=0; i < size;i++){
        cin >> num[i];
    }
    for (int j = 0; j < size;j++){
        int temp = 0;
        if (j<size-3){
            temp = num[j];
            num[j] = num[j + 2];
            num[j + 2] = temp;
        }
    }
    for (int i=0; i < size;i++){
        cout << num[i]<<" ";
    }
    return 0;
}