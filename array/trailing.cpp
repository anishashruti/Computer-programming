#include <iostream>
#include <sstream>  // for string streams
#include <string>  // for string
#include <algorithm>
using namespace std;
int my_factorial(int n){
    if(n==1 || n==0){
        return 1;

    }
    else{
        return (n * my_factorial(n - 1));
    }
}
int main() {
    int no,fact;
    string num;
    cin >> no;
    fact = my_factorial(no);
    ostringstream str1;
    str1 << fact;
    num = str1.str();
    reverse(num.begin(), num.end());
    int i = 0,count=0;
    cout << num<<'\n';
    while (i != num.length()-1)
    {
        if(num[i] =='0'){
            count++;
        }
        else{
            break;
        }
        i++;
    }
    cout << count;
}
