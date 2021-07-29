#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void simple(int arr[20][20],int row,int col){
    int rowarr[row];
    int colarr[col];

    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(arr[i][j]==0){
                rowarr[i] = 0;
                colarr[j] = 0;
            }
        }
        cout << "\n";
    }
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(rowarr[i] == 0 || colarr[j] == 0){
                cout<<0<<" ";
            }
            else{
                cout << arr[i][j]<<" ";
            }
        }
        cout << "\n";
    }

}
int main()
{
    fastIO();
    int row,col;
    cin >> row >> col;
    ;
    int arr[20][20];
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cin >> arr[i][j];
        }
    }
    simple(arr,row,col);
    return 0;
}