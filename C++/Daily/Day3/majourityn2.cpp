#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void moorealgo(vector<int> v,int n){
    int count = 0;
    int element = 0;
    for(int num:v){
        if(count==0){
            element = num;
        }
        if(element==num){
            count++;
        }
        else{
            count--;
        }
    }
    cout<< element;
    }
int main()
{
    fastIO();
    int n,a;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    moorealgo(v,n);
    return 0;
}