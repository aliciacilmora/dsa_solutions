#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> freq(26, 0);
    for (char c : input) {
        freq[c - 'A'] += 1;
    }

    string half = "";
    char oddChar = '\0';
    int oddCount = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddChar = char('A' + i);
        }
        for(int j=0; j<freq[i]/2; j++){
            half += char('A' + i);
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string output = half;
    if (oddCount == 1) {
        output += oddChar;
    }
    
    output += string(half.rbegin(), half.rend());

    cout << output;
    
    return 0;
}
