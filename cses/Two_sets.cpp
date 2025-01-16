#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long total_sum = (n*(n+1)) / 2;
    if(total_sum & 1){
        cout << "NO";
        return 0;
    }

    long long halfSum = total_sum / 2;    
    vector<int>visited(n+1, 0);
    visited[0] = 1;
    int f = 0;

    for(int i=n; i>0; i--){
        if(!visited[i]){
            halfSum -= i;
            visited[i] = 1;
            f += 1;
        }
        if(halfSum < 0){
            halfSum += i;
            visited[i] = 0;
            f -= 1;
        }
    }

    if(halfSum != 0)cout << "NO";
    else{
        cout << "YES" << endl;
        cout << f << endl;
        for(int i=1; i<n+1; i++){
            if(visited[i]) cout << i << " ";
        }
        cout << endl << n - f << endl;
        for(int i=1; i<n+1; i++){
            if(!visited[i]) cout << i << " ";
        }
    }
    return 0;
}