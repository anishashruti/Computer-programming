#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void search2DGFG(vector<vector<int>> mat,int n,int key){
    int i = 0;
    int j = n - 1;
    while(i<=n && j>=0){
        if(mat[i][j]==key){
            cout << "found";
            break;
        }
        else{
            if(key<mat[i][j])
                j--;
            else
                i++;
        }
    }
}
void search2DLeetcode(vector<vector<int>> mat,int n,int key){
    int low, high;
    low = 0;
    high = n - 1;
    while(low<=high){
        int mid = (low + (high - low) / 2);
        if(mat[mid/n][mid%n]==key){
            cout << "found";
        }
        if(mat[mid/n][mid%n]<key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}
int main()
{
    fastIO();
    int n,a;
    vector<vector<int>> mat;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> v1;
  
        for (int j = 0; j < n; j++) {
            cin >> a;
            v1.push_back(a);
        }
        mat.push_back(v1);
    }
    int key;
    cin >> key;
    int ch = 0;
    cin >> ch;
    switch(ch){
        case 1:
            search2DGFG(mat,n,key);
            break;
        case 2:
            search2DLeetcode(mat,n,key);
            break;
    }
    return 0;
}