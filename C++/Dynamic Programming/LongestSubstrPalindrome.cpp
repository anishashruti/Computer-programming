#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void printSubStr(string s, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << s[i];
}
int longestsubstr(string s){
    int n = s.size();
    int adj[n][n];
       int start = 0;
    memset(adj, 0, sizeof(adj));
    int maxLength = 1;
    for (int i = 0; i < n;i++){
        adj[i][i] = 1;
        if(s[i]==s[i+1]){
            adj[i][i + 1] = 1;
            int maxLength = 1;
        }
    }

    //For substring having length greater than 3
    for (int k = 0; k <= n;k++){
        for (int i = 0; i < n - k + 1;i++){
            int j = i + k - 1;
    if (adj[i + 1][j - 1] && s[i] == s[j]) {
                adj[i][j] = true;
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }

        }
    }
    printSubStr(s, start, start + maxLength - 1);
        return maxLength;
}

int main()
{
    fastIO();
    string s;
    int l;
    cout << "Enter a string: ";
    getline(cin, s);
    l = longestsubstr(s);
    cout << " ";
    cout << l;
    return 0;
}