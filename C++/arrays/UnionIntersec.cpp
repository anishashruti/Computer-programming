#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int sizeA1,sizeA2,s=0,k=0,maxl;
    int arr1[20],arr2[20];
    int unionArr[10];
    int intersectionArr[10];
    cin >> sizeA1;
    for (int i = 0; i < sizeA1;i++){
        cin >> arr1[i];
    }
    cin >> sizeA2;
    for (int i = 0; i < sizeA2;i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1 + sizeA1);
    sort(arr2, arr2 + sizeA2);
    if(sizeA1>sizeA2){
        for (int i = 0;i<sizeA1;i++){
            unionArr[i] = arr1[i];
        }
        for (int j = 0;j<sizeA2;j++){
            if(unionArr[j] == arr2[j]){
                intersectionArr[s] = arr2[j];
                s++;
                cout << s;
            }
            else
            {
                unionArr[sizeA1 + k] = arr2[j];
                k++;
            }
        }
        maxl = sizeA1;
    }
    else{
        for (int i = 0;i<sizeA2;i++){
            unionArr[i] = arr2[i];
        }
        for (int j = 0;j<sizeA1;j++){
            if(unionArr[j]== arr1[j]){
                intersectionArr[s] = arr1[j];
                s++;
            }
            else
            {
                unionArr[sizeA2 + k] = arr1[j];
                k++;
            }
        }
    maxl = sizeA2;
    }
    cout << "--INTERSECTION--"<< "\n";
    for (int i = 0; i < s;i++){
        cout << intersectionArr[i] << " ";
    }
    cout << "\n";
    cout << "--UNION--"
         << "\n";
    for (int i = 0; i < maxl+k;i++){
        cout << unionArr[i] << " ";
    }



    return 0;
}