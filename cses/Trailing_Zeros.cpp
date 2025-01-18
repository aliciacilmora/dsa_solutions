#include<iostream>
using namespace std;

int main(){
    int n; // find factorial
    cin >> n;
    int trailingZeros = 0;

    // numbers greater than 25 itself carry more than one 5
    for(int i=5; n/i >= 1; i*= 5){
        trailingZeros += n / i;
    }

    cout << trailingZeros;
    return 0;
}
