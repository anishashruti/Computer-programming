#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}

bool linearSearch(int arr[20],int sizeA,int ele,bool val)
{
    for (int i = 0; i < sizeA;i++){
        if(arr[i]==ele){
            val = true;
        }
    }
    return val;
}
void binarySearchArr(int lo,int hi,int arr[20],int ele){
    int element;
    while(lo<hi){
        int mid = (lo + hi) / 2;
        element = arr[mid];
        if(ele<=element)
        {
            hi = mid;
        }
        else{
            lo = mid + 1;
        }
    }

    if(arr[lo]==ele)
        cout << "Binary Search (CUSTOM) --> "<<"TRUE";
    else
        cout << "Binary Search (CUSTOM) -->"<<"FALSE";
}
int main()
{
    fastIO();
    int sizeA;
    int searchele;
    int arr[20];
    cin >> sizeA;
    bool val = false;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    cin >> searchele;
    val = linearSearch(arr, sizeA, searchele, val);
    sort(arr,arr+sizeA);
    cout<< "Bineray search --> " << ((binary_search(arr, arr + sizeA, searchele) > 0)? "TRUE" : "FALSE")<< "\n";
    cout<<"Linear Search --> "<<((val > 0)? "TRUE" : "FALSE");
    binarySearchArr(0, sizeA,arr,searchele);
    return 0;
}