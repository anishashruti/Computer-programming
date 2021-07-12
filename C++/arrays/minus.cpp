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
    int pos[20];
    int neg[20];
    bool val = false;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    int po = 0;
    int ne = 0;
    for (int i = 0; i < sizeA;i++){
        if(arr[i]<0)
        {
            neg[ne] = arr[i];
            ne++;
        }
        else{
            pos[po] = arr[i];
            po++;
        }
    }
    for (int i = 0; i < ne;i++){
        cout << neg[i] << " ";
    }
    for (int i = 0; i < po;i++){
        cout << pos[i] << " ";
    }
        return 0;
}