#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    float no[3] = {1.344, 1.522, 1.742};
    cout << "Floor\n";
    cout << floor(no[0]) << endl;
    cout << floor(no[1]) << endl;
    cout << floor(no[2]) << endl;

    cout << "Ceil\n";
    cout << ceil(no[0]) << endl;
    cout << ceil(no[1]) << endl;
    cout << ceil(no[2]) << endl;


    cout << "Trunc\n";
    cout << trunc(no[0]) << endl;
    cout << trunc(no[1]) << endl;
    cout << trunc(no[2]) << endl;

    
    cout << "Round\n";
    cout << round(no[0]) << endl;
    cout << round(no[1]) << endl;
    cout << round(no[2]) << endl;

    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(1) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(2) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(3) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(4) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(5) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(6) << pi <<" "<<npi<<endl;

    return 0;
}