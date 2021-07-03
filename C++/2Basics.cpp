#include <iostream>

using namespace std;

int main()
{
    char sample[20];
    ios_base::sync_with_stdio(false);
    // extraction operator(>>)
    cin >> sample;
    cout << sample << " - A Django web developer";


    // Using Getline for strings with newline in them
    string str; 
    int t = 4; 
    while (t--) 
    { 
        getline(cin, str); 
  
        // Keep reading a new line while there is 
        // a blank line 
        while (str.length()==0 ) 
            getline(cin, str); 
        cout << str << " : newline" << endl; 
    } 

    // cout << endl  : Inserts a new line and flushes the stream
    // cout << "\n"  : Only inserts a new line.
    // cout << endl; same as cout << ‘\n’ << flush; 
    // So cout << “\n” seems performance wise better than cout << endl; 

    return 0;
}