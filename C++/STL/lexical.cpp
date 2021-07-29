	#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
int main()
{
    fastIO();
        string s = "anisha"; 

	do {
		cout << s << endl; 
	} while(next_permutation(s.begin(), s.end())); 
    return 0;
}
