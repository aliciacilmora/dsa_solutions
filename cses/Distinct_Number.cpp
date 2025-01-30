#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> unique;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        unique.insert(temp);
    }

    cout << unique.size();
}