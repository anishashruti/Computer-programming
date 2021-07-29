#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void M90(vector<vector<int>> mat,int n){
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i; j++) 
            swap(mat[i][j], mat[j][i]);

    for (int i = 0; i < n; i++)
        reverse(mat[i].begin(), mat[i].end());

    for (int i = 0; i < n; i++) {
        for (auto it = mat[i].begin();it != mat[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}
void M180(vector<vector<int>> mat,int n){
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i; j++) 
            swap(mat[i][j], mat[j][i]);

    for (int i = 0; i < n; i++)
        reverse(mat[i].begin(), mat[i].end());

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i; j++) 
            swap(mat[i][j], mat[j][i]);

    for (int i = 0; i < n; i++) {
        for (auto it = mat[i].begin();it != mat[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}
void M270(vector<vector<int>> mat,int n){
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i; j++) 
            swap(mat[i][j], mat[j][i]);

    for (int i = 0; i < n; i++) {
        for (auto it = mat[i].begin();it != mat[i].end(); it++)
            cout << *it << " ";
        cout << endl;
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
    int ch = 0;
    cin >> ch;
    switch(ch){
        case 1:
            M90(mat,n);
            break;
        case 2:
            M180(mat,n);
            break;
        case 3:
            M270(mat,n);
            break;
    }
    return 0;
}