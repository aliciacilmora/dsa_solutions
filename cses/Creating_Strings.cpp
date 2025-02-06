#include<bits/stdc++.h>
using namespace std;

void fill(string input, string store, vector<int>& visited, set<string>& allComb){
    if(store.size() == input.size()){
        allComb.insert(store);
        return;
    }

    for(int i=0; i<input.size(); i++){
        if(visited[i] == 0){
            // choose at index i
            store += input[i];
            visited[i] = 1;

            // recursively fill rest combination
            fill(input, store, visited, allComb);

            // backtrack undo the choice to includ input[i]
            store.pop_back();
            visited[i] = 0;
        }
    }
}


int main(){
    string input;
    cin >> input;

    int n = input.size();
    vector<int>visited(n, 0);
    set<string>allComb;

    fill(input, "", visited, allComb);

    cout << allComb.size() << endl;
    
    for(string s: allComb)cout << s << endl;
}