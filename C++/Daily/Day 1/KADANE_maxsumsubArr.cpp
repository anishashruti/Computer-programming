#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void simple_kadanealgo(int arr[20],int size){
    int sum = 0;
    int maxele = arr[0];
    for (int i = 0; i < size;i++)
    {
        sum += arr[i];
        maxele = max(sum, maxele);
        cout << maxele<<" ";
        if(sum<0){
            sum=0;
            //max = sum;
        }
    }
    cout << maxele;
}
int main()
{
    fastIO();
    int sizeA;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    simple_kadanealgo(arr,sizeA);
    return 0;
}