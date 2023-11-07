#include <bits/stdc++.h>
using namespace std;

bool isdistinct(int n);

int main(){
    int year;
    cin >> year;
    for(int i = year+1; ;i++){
        if(isdistinct(i)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}

bool isdistinct(int n){
    array<int,4> digit;
    int i = 0;
    while(n != 0){
        int k = n % 10;
        digit[i] = k;
        i++;
        n = n/10;
    }

    for(int j = 0; j < 4; j++){
        for(int k = 0; k < 4; k++){
            if((digit[j] == digit[k]) && j != k) return false;
        }
    }

    return true;
}