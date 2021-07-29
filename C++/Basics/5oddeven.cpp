#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[40];
    int size;
    int odd1 = 0, even1 = 0;
    cin >> size;
    for (int i=0;i<size;i++){
        cin >> arr[i];      
    }
    for (int i=0;i<size;i++){
        if(arr[i]%2!=0){
            odd1++;
        } 
        else{
            even1++;
        }
    }
    cout << odd1<<" " << even1<<endl;
    return 0;
}