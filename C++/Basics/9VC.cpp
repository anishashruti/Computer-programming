#include <bits/stdc++.h>
//count vowels and consonants
using namespace std;
//Enter a string: this is a nice day
//6 8
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0, v = 0;
    int c=0;
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