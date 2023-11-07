#include <bits/stdc++.h>
using namespace std;

int main(){
    int pages,num[7];
    cin >> pages;
    for(int i = 0; i < 7; i++){
        cin >> num[i];
    }
    int j = 0;
    while(1){
        pages -= num[j%7];
        if(pages <= 0){
            break;
        }
        j++;
    }

    int days = (j % 7) +1;

    cout << days << endl;

    return 0;
}