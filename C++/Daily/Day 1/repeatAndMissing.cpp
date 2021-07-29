#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void hashing_method(int arr[30],int n){
unordered_map<int, int> m;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 1; i <= 5; i++)
        m[i]=0;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    // To print elements according to first
    // occurrence, traverse array one more time
    // print frequencies of elements and mark
    // frequencies as -1 so that same element
    // is not printed multiple times.
    for (int i = 0; i < n; i++) {
      if (m[i] == 0)
      {
          cout << arr[i] << " " << m[arr[i]] << endl;
          m[arr[i]] = -1;
      }
    }
    // for (auto it = m.begin(); it != m.end(); it++){
    //     cout << it->first << "      " << it->second
    //          << endl;
    // }
}
int main()
{
    fastIO();
    int sizeA;
    int searchele;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
            hashing_method(arr,sizeA);
    return 0;
}