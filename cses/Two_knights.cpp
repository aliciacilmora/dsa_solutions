#include<iostream>
using namespace std;

int main(){
    int k;
    cin >> k;

    for(int n=1; n<=k; n++){
        // total ways for two knights
        long long total_ways = (1LL*(n*n)*(n*n-1)) / 2;
        // attacking ways
        // 3X2 and 2X3 grids will attack and they will have 2 ways each
        // if we just move the chess board 90deg we will get another case
        long long attacking_pairs = 4 * (n-1) * (n-2);
        cout << total_ways - attacking_pairs << endl;
    }
    return 0;
}


