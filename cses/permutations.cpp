#include<bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin >> input;
    if(input == 1){
        cout << 1;
    }
    else if(input == 2 || input == 3) cout << "NO SOLUTION";
    else{
        for(int i=input-1; i>0; i-=2){
            cout << i << " ";
        }
        for(int i=input; i>0; i-=2){
            cout << i << " ";
        }
    } 
}
