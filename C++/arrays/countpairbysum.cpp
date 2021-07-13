// Use a hash map to solve the question in O(n) time. 


// For every element check if it can be combined with any other element (other than itself!) to give the desired sum. Increment the counter accordingly. After completion of second traversal, we’d have twice the required value stored in counter because every pair is counted two times. 
// Also take care of pairs with duplicate elements like (2,2) when K =4.

#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int sizeA,count,s;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    map<int, int> M;
    cin >> s;
    // Create a map to store frequency of each number in the array. (Single traversal is required)
    for (int i = 0;arr[i];i++){
        if (M.find(arr[i]) == M.end()) {
            M[arr[i]] = 1;
        }
        else {
            M[arr[i]]++;
        }
    }
    for (auto& it : M) {
        cout << it.first << ' '
             << it.second << '\n';
    }
    return 0;
}