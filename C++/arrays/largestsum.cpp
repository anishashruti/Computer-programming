// Find Largest sum contiguous Subarray.[Very Important]

#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    int sizeA,index=0;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    int k = 0;
    int s = 0;
    int sums[40];
    //countinous sub array
    for (k = 0;k<sizeA;k++)
    {
        for (int i = 0; i < sizeA; i++)
        {
            for (int j = k; j < sizeA-1; j++)
            {
                s = s + arr[j];
                cout << arr[j] << " ";
            }
            cout << "\n";
            sums[index] = s;
            index++;
            s = 0;
        }
    }
    int maxele = sums[0];
    for (int i = 1; i < index+1;i++){
        // cout << sums[i];
        if (sums[i]>maxele){
            maxele = sums[i];
        }
    }
            // cout<< maxele;
        return 0;
}