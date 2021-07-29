#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void optimized(vector<int> v,int size){
    int minp = INT_MAX;
    int profit=0;
    for (int i = 0; i < size;i++){
        minp = min(minp, v[i]);
        profit = max(profit, (v[i] - minp));
    }
    cout << profit;
}
void simple(vector<int> v,int size){
    int min = INT_MAX;
    int profit=0;
    for (int i = 0; i < size;i++){
        if(min>v[i]){
            min = v[i];
        }
        else{
            int sub;
            sub = v[i] - min;
            if(sub>profit){
                profit= sub;
            }
        }
    }
    cout << profit;
}
int main()
{
    fastIO();
    int sizeA;
    vector<int> v;
    int a;
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> a;
        v.push_back(a);
    }
    simple(v, sizeA);
    optimized(v,sizeA);
    return 0;
}