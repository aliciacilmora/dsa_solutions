#include<bits/stdc++.h>
using namespace std;

void addInGroup(long long &result, int ind, long long &s1, long long s, vector<int>& appleWeight){
    if(ind > appleWeight.size()) return;

    long long pick = s1 + appleWeight[ind];
    long long notPick = s1;
    result = min(result, min(abs(s - 2 * pick), abs(s - 2 * notPick)));

    addInGroup(result, ind + 1, pick, s, appleWeight);
    addInGroup(result, ind + 1, notPick, s, appleWeight);

}

int main(){
    int noOfApples;
    cin >> noOfApples;

    vector<int>appleWeight(noOfApples);

    long long total = 0;
    long long s1 = 0;
    long long result = INT_MAX;

    for(int i=0; i<noOfApples; i++){
        int temp;
        cin >> temp;
        total += temp;
        appleWeight[i] = temp;
    }

    addInGroup(result, 0, s1, total, appleWeight);
    cout << result;
}




// the main idea is there will be a sum in every tracing and then 
// we will have to reduce it from the main sum and then take difference
// but how to think about taking it in a group 
// this we can decide using pick or not picking
// so there will be a global result var which will be minimized every
// instance of backtracking part