#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void pascals_triangle(int size){
    vector<vector<int>> r(size);
    for (int i = 0; i < size;i++)
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
        for (int j = 1; j < i;j++){
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];   
        }
    }
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++)
            cout << r[i][j] << " ";
        cout << endl;
    }

}
int main()
{
    fastIO();
    int sizeA;
    cin >> sizeA;
    pascals_triangle(sizeA);
    return 0;
}