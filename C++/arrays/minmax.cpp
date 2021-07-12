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
    int searchele;
    int arr[20];
    cin >> sizeA;
    bool val = false;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    sort(arr,arr+sizeA);
    cout << "Min -->" <<arr[0];
    cout << "Max -->" << arr[sizeA - 1];
    return 0;
}