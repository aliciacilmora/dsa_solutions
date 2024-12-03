#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums;
    cin >> nums;
    vector<long long>store(nums);

    for(int i=0; i<nums; i++){
        long long num;
        cin >> num;
        store[i] = num;
    }

    long long count = 0;

    for(int i=1; i<nums; i++){
        if(store[i] < store[i-1]){
            count += store[i-1] - store[i];
            store[i] = store[i-1];
        }
    }

    cout << count;
}