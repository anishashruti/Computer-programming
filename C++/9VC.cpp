#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i=0,v,c;
    while(str[i]){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
    ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' ){
        v++;
    }
    else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
        c++;
    }
     i++;
    }

    cout << v << " " << c;
    return 0;
}