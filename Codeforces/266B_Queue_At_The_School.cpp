#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b);

int main(){
    int n, time;
    cin >> n >> time;
    char queue[n];
    for(int i = 0; i < n; i++){
        cin >> queue[i];
    }

    int count = 0;
    while(1){
        for(int i = 0; i < n-1; i++){
            if(queue[i] == 'B' && queue[i+1] == 'G'){
                swap(queue[i],queue[i+1]);
                i+=1;
            } 
        }
        count++;
        if(count == time) break;
    }

    for(int i = 0; i < n; i++){
        cout << queue[i];
    }

    return 0;
}

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}