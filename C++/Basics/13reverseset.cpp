#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
    set<int> s{1, 2, 3, 4};
    for(auto x:s)
        cout << x << " ";
    set<int>::reverse_iterator rit;
    for (rit = s.rbegin(); rit!= s.rend();rit++)
    {
        cout << *rit << " ";
    }
        return 0;
}