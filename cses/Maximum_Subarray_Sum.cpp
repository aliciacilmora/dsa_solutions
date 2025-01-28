#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = INT_MIN;
    long long sum = 0;

    vector<long long>nums(n);

    for(long long i=0; i<n; i++){
        long long temp;
        cin >> temp;
        nums[i] = temp;
    }

    for(long long num: nums){
        sum = max(num, sum + num);
        ans = max(ans, sum);
    }

    cout << ans; 
    return 0;
}