#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    array<int,3> force = {0,0,0};
    array<int,3> result = {0,0,0};
    cin >> t;

    int a, b, c;
    while(t--){
        cin >> a >> b >> c;
        force[0] += a;
        force[1] += b;
        force[2] += c;
    }

    if(force == result){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}