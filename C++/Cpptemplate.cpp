#include <bits/stdc++.h>

using namespace std;
void fastIO(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}
void simple(){


}
void mid(){

}
void optimized(){


}
int main()
{
    fastIO();
    int sizeA;
    int searchele;
    int arr[20];
    cin >> sizeA;
    for (int i = 0; i < sizeA;i++){
        cin >> arr[i];
    }
    int ch = 0;
    cin >> ch;
    switch(ch){
        case 1:
            simple();
            break;
        case 2:
            mid();
            break;
        case 3:
            optimized();
            break;
    }
    return 0;
}