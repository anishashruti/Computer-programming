#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void mid(int arr1[20],int n1,int arr2[20],int n2){
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n2;j++){
        if(arr1[i]> arr2[j]){
            int temp;
            temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            sort(arr2, arr2 + n2);
        }
        }
    }
    for (int i = 0; i < n1;i++){
        cout<<arr1[i]<<" ";
    }
    for (int i = 0; i < n2;i++){
        cout<<arr2[i]<<" ";
    }
}
void simple(int arr1[20],int n1,int arr2[20],int n2){
    int arr3[50];
    int s;
    s = n1 + n2;
    for (int i = 0; i < n1;i++){
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < n2;j++){
        arr3[n1 + j] = arr2[j];
    }
    sort(arr3, arr3+s);
    for (int j = 0; j < s;j++){
        cout << arr3[j] << " ";
    }

}
void optimized(){


}
int main()
{
    fastIO();
    int sizeA;
    int arr1[20];
    int ch = 0;
    cin >> ch;
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr1[i];
    }
    int sizeB;
    int arr2[20];
    cin >> sizeB;
    for (int i = 0; i < sizeB;i++){
        cin >> arr2[i];
    }

    switch(ch){
        case 1:
            simple(arr1,sizeA,arr2,sizeB);
            break;
        case 2:
            mid(arr1,sizeA,arr2,sizeB);
            break;
        // case 3:
        //     optimized();
        //     break;
    }
    return 0;
}