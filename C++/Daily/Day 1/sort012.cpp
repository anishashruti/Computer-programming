#include <bits/stdc++.h>
//1.Sort an array of 0’s 1’s 2’s without using extra spaceor sorting algo


using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void simple_sortmtd(int arr[20],int sizeA){
    // sort(arr, arr + sizeA); we should not be using built in sorting algorithm
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
        for (int i = 0; i < sizeA;i++){
        cout<< arr[i]<<" ";
    }
    cout << "\n";
    cout << "Time complexity is-- "
         << " O(n(logn))"
         << "\n"
         << "Space Complexity is-- "
         << "O(1)";
}

void count_sort(int arr[20],int sizeA){
    int z, o, t;
    z = o = t = 0;
    for (int i = 0;i<sizeA;i++){
        if(arr[i]==0)
            z++;
        else if(arr[i]==1)
            o++;
        else if(arr[i]==2)
            t++;
    }
    vector<int> v(z,0);
    v.insert(v.end(), o,1);
    v.insert(v.end(),t, 2);

    for (auto it = v.begin(); it != v.end(); it++) {
		cout << *(it) << " ";
	}
        cout << "\n";
        cout << "Time complexity is-- "
         << " O(2(n))"
         << "\n"
         << "Space Complexity is-- "
         << "O(1)";
}
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void dutch_national_flag(int arr[20],int sizeA){
    int low, mid, high;
    low = mid = 0;
    high = sizeA - 1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[high], arr[mid]);
                high--;
                break;
        }
    }
    for (int i = 0; i < sizeA;i++){
        cout<< arr[i];
    }
            cout << "\n";
        cout << "Time complexity is-- "
         << " O(n)"
         << "\n"
         << "Space Complexity is-- "
         << "O(1)";
}

int main()
{
    fastIO();
    int sizeA;
    int searchele;
    int arr[20];

    int ch = 0;
    cin >> ch;
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    switch(ch){
        case 1:
            simple_sortmtd(arr,sizeA);
            break;
        case 2:
            count_sort(arr,sizeA);
            break;
        case 3:
            dutch_national_flag(arr,sizeA);
            break;
    }
    return 0;
}