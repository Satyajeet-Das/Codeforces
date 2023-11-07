#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count = 0;
    cin >> n >> k;

    int result[n];

    for(int i = 0; i < n; i++){
        cin >> result[i]; 
    }

    for(int j = 0; j < n; j++){
        if(result[j] >= result[k-1] && result[j] != 0){
            count +=1;
        }
    }

    cout << count << endl;

    return 0;
}