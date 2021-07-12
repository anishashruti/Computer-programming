#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void bubblesort(int arr[20],int sizeA)
{
    for (int i = 0; i < sizeA - 1;i++)
        {
            for (int j = 0; j < (sizeA - i - 1);j++)
            {
                if(arr[j]>arr[j+1])
                {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                }
            }
        }
        cout << "---BUBBLE SORT---"<< "\n";
        for (int i = 0; i < sizeA;i++){
            cout<< arr[i]<<" ";
        }
}
void incertionSort(int arr[20],int sizeA){
    int i, j, key;
    for (i = 1;i<sizeA;i++){
        key = arr[i];
        j = i - 1;
         while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "---INCERTION SORT---"<< "\n";
        for (int i = 0; i < sizeA;i++){
            cout<< arr[i]<<" ";
        }
}
int main()
{
    fastIO();
    int sizeA;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    bubblesort(arr, sizeA);
    incertionSort(arr, sizeA);
    return 0;
}