#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
vector<int> simple(int arr[20],int n,int target){
    vector<int> ans;
    unordered_map<int,int> mpp;
    for (int i = 0; i < n;i++){
        if(mpp.find(target-arr[i])!=mpp.end()){
            ans.push_back(mpp[target - arr[i]]);
           ans.push_back(i);
           return ans;
        }
        mpp[arr[i]] = i;
    }
    return ans;
}
int main()
{
    fastIO();
    int sizeA,target;
    int searchele;
    int arr[20];
    cin >> sizeA;
    vector<int> v;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    cin >> target;
    v=simple(arr,sizeA,target);
    cout << v[0] << " " << v[1];
    return 0;
}