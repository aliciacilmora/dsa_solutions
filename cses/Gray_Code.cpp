#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    for(int i=0; i<(1<<size); i++){
        int grayCode = i ^ (i >> 1);
        string nums = "";
        for(int bits=0; bits<size; bits++){
            nums += ((grayCode >> bits) & 1)? '1': '0';
        }
        cout << nums << endl;
    }
    return 0;
}
// 000 000
// 001 001
// 010 011
// 011 010
// 100 110
// 101 111
// 110 101
// 111 100
