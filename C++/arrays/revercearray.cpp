#include <bits/stdc++.h>
//Swapping of array elements first and last
using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int sizeA;
    int searchele;
    int arr[20];
    cin >> sizeA;
    bool val = false;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    int start=0, end=sizeA-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < sizeA;i++){
        cout<< arr[i];
    }
    return 0;
}