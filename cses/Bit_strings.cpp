#include<iostream>
using namespace std;

long long pow(int x, long long n){
    long long result = 1;
    int modulo = 1000000007;

    while(n > 0){
        if(n&1)result = (result * (long long)x) % modulo;
        x = ((long long)x * (long long)x) % modulo;
        n /= 2;
    }
    return result;
}

int main(){
    long long n; // length
    cin >> n;
    cout << pow(2, n);
}
