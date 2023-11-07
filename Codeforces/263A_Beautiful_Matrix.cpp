#include <bits/stdc++.h>
using namespace std;

int moves(int a, int b); 

int main(){
    int matrix[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++ ){
            cin >> matrix[i][j];
        }
    }
    for(int r = 0; r < 5; r++){
        for(int c = 0; c < 5; c++){
            if(matrix[r][c] == 1){
                cout << moves(r,c);
                break;
            }
        }
    }
    return 0;
}

int moves(int a, int b){
    return abs(a-2) + abs(b-2);
}