// One solution is to check every element if it appears once or not. Once an element with a single occurrence is found, 
// return it. Time complexity of this solution is O(n2).

// best solution is using xor
// Required no = 2*(sum_of_array_without_duplicates) - (sum_of_array)
//binary search

#include <iostream>
using namespace std;

int main()
    {
        // Do XOR of all elements and return
        int size=7;
        cin >> size;
        int arr[20];
        for (int i = 0; i < size;i++){
        cin >> arr[i];
        }
        int res = arr[0];
        for (int j = 1; j < size; j++)
            res = res ^ arr[j];

        cout<< res;
    }