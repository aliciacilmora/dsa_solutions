#include<iostream>
using namespace std;

int main(){
    int tests;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        int fPile, sPile;
        cin >> fPile >> sPile;

        if ((fPile + sPile) % 3 == 0 && max(fPile, sPile) <= 2 * min(fPile, sPile)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }   
    return 0;
}
