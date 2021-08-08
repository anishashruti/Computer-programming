#include <bits/stdc++.h>
#include <ios>
using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
bool canSum(vector<int> &a,int n,int target,vector<int> &m){
if(target==0){
    return (true);
}
else if(target<0){
    return false;
}
else if(m[target]!=-1)
{
    return m[target];
}
else{
    for (int i = 0; i < n;i++)
    {
        if(canSum(a, n, target - a[i],m)==true)
            m[target] = true;
            return true;
    }
}
return false;
}


int main()
{
    fastIO();
    int n,a,target;
    vector<int> m;
    bool res;
    cin >> n;
    cin >> target;
    vector<int> v;
    for (int i = 0; i < n;i++){
        cin >> a;
        v.push_back(a);
    }
    res=canSum(v,n,target,m);
    cout << res;
}