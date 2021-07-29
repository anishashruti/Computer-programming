#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int sizeA;
    int i;
    int arr[20];
    cin >> sizeA;
    bool val = false;
    for (i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    // int di = 0;
    // for (i = 0; i < sizeA;i++){
    //     for (int j = i+1; j < sizeA;j++){
    //         if(arr[i]==arr[j])
    //         {
    //             di = arr[i];
    //             break;
    //         }
    //     }
    // }
    // if(di!=0){
    // cout << di;
    // }
    // else{
    //     cout << "No repeating elements";
    // }

     // Initialize index of first repeating element
    int min = -1;
 
    // Creates an empty hashset
    set<int> myset;
 
    // Traverse the input array from right to left
    for (int i = sizeA - 1; i >= 0; i--)
    {
        // If element is already in hash set, update min
        if (myset.find(arr[i]) != myset.end())
            min = i;
 
        else   // Else add element to hash set
            myset.insert(arr[i]);
    }
 
    // Print the result
    if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
    return 0;
}