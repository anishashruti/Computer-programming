#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int countpathr(int i,int j,int n){
if(i==n-1 && j==n-1)
    return 1;
if(i>=n || j>=n)
    return 0;
else{
    return (countpathr(i + 1, j,n) + countpathr(i, j + 1,n));
}
}
int countpathdp(int i,int j,int n,vector<vector<int>> &v){
if(i==n-1 && j==n-1)
    return 1;
if(i>=n || j>=n)
    return 0;
if(v[i][j]!=-1){
    return (v[i][j]);
}
else{
    return v[i][j]=countpathdp(i + 1, j,n,v) + countpathdp(i, j + 1,n,v);
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
    int k;
    int ch = 0;
    cin >> ch;
    switch(ch){
        case 1:
            k=countpathr(0,0,n);
            cout << k;
            break;
        case 2:
            vector<vector<int>> v(n,vector<int>(n,-1));
            k=countpathdp(0,0,n,v);
            cout << k;
            break;
    }
    return 0;
}