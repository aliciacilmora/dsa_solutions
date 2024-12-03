#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char check = s[0];
    int ans = 1;
    int temp = 1;

    for(int i=1; i<s.size(); i++){
        if(s[i] == check){
            temp++;
            ans = max(ans, temp);
        }
        else{
            temp = 1;
            check = s[i];
        }
    }
    cout << ans;
}