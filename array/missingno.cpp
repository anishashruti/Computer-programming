#include <iostream>
using namespace std;

int main() {    
    int numbers[25],size,c;
    cin >> size;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    int total = (size + 1) * (size) / 2;
    for (int i = 0; i < size-1; i++)
            total -= numbers[i];
    cout << total;
    return 0;
}