#include<bits/stdc++.h>
using namespace std;

int main(){
    long long inp;
    cin >> inp;

    while(inp != 1){
        if(inp & 1 == 1){
            cout << inp << " ";
            inp = inp * 3 + 1;
        }
        else{
            cout << inp << " ";
            inp = inp / 2;
        }
    }
    cout << "1";
}