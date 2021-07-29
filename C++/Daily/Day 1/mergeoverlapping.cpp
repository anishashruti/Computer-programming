#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void simple(vector< pair <int,int> > &vect,int pairs){
    int index = 0;
    for (int i=0; i<pairs; i++)
    {
        for (int i=1; i<pairs; i++)
        {
            // If this is not first Interval and overlaps
            // with the previous one
            if (vect[index].second >=  vect[i].first)
            {
               // Merge previous and current Intervals
            vect[index].second = max(vect[index].second, vect[i].second);
            vect[index].first = min(vect[index].first, vect[i].first);
        }
        else {
            index++;
            vect[index] = vect[i];
        }   
    }
    }
}
int main()
{
    fastIO();
    int pairs;
    int arr[20];
    int first, second;
    cin >> pairs;
    vector< pair <int,int> > vect;
    for (int i = 0; i < pairs;i++){
        cin >> first >> second;
        vect.push_back( make_pair(first,second) );
    }
    
    sort(vect.begin(), vect.end());
            simple(vect,pairs);
            for (int i=0; i<pairs-1; i++)
            {
            cout << vect[i].first << " "
                << vect[i].second << endl;
            }
    return 0;
}