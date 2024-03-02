#include <iostream>
using namespace std;

int main() {
    int userValue;
    int i;
    int j;
    
    cin >> userValue;
    
    for (i = 1; i <= userValue; i++) {
        for (j = 1; j <= i; j++) {
            cout << "$";
        }
        cout << i << endl;
    }
    
    return 0;
}
