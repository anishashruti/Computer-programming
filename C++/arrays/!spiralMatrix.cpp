#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int row, col;
    cin >> row;
    cin >> col;
    int arr[row][col];
    for (int i = 0; i < row;i++)
    {
        for (int j=0; j < col;j++){
            cin >> arr[i][j];
        }
    }
    int k, l;
    k= l = 0;
    while(l<col)
    {
        cout << arr[k][l] << " ";
        l++;
    }

    // for (int k = 0; k < row;k++)
    // {
    //     for (int l=0; l < col;l++){
    //         cout << arr[k][l];
    //         cout << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}