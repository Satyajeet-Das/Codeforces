#include <bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin >> w;
    /*
    All even numbers except 2 (since 2 + 0 is
    not possible because atleast eveyone should
    get one watermelon) can be divided into two even parts

    Since Even + Even = Even
    Even + Odd = Odd
    */
    
    if(w == 2){
        cout << "NO";
    }
    else if(w % 2 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
