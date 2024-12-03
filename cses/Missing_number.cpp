#include<bits/stdc++.h>
using namespace std;

int main(){
    long long total_num;
    cin >> total_num;

    long long sum = 0;

    for(int i=1; i<total_num; i++){
        long long num;
        cin >> num;
        sum += num;
    }

    long long missing = (total_num * (total_num + 1)) / 2 - sum;

    cout << missing;
}