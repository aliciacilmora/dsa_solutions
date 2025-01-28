#include<iostream>
using namespace std;

int towerOfHanoiCount(int n) {
    if (n == 0) return 0;
    return 2 * towerOfHanoiCount(n - 1) + 1;
}

void towerOfHanoi(int n, int A, int B, int C, int& count){
    if(n > 0){
        towerOfHanoi(n-1, A, C, B, count);
        cout << A << " " << C << endl;
        towerOfHanoi(n-1, B, A, C, count);
        count += 1;
    }
}

int main(){
    int disks;
    cin >> disks;

    int count = towerOfHanoiCount(disks);
    cout << count << endl;
    
    towerOfHanoi(disks, 1, 2, 3, count);

    return 0;
}