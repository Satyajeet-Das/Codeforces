#include <bits/stdc++.h>
using namespace std;

int isAttempt(int a, int b, int c);

int main(){
    int t, count = 0;
    cin >> t;

    int a, b, c;
    while(t--){
        cin >> a >> b >> c;
        if(isAttempt(a,b,c)){
            count++;
        }
    }
    cout << count;
}

int isAttempt(int a, int b, int c){
    if((a == 1 && b == 1) || (a==1 && c == 1) || (b == 1 && c ==1)){
        return 1;
    }else{
        return 0;
    }
}