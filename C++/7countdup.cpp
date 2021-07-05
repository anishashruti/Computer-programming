#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[20];
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        arr[arr[i] % n]= arr[arr[i] % n] + n;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= n * 2) {
            count++;
        }
    }
    cout << count;

    return 0;
}