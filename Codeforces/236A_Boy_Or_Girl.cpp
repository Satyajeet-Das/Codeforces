#include <bits/stdc++.h>
using namespace std;

int main(){
    string username;
    set<char> letters;
    cin >> username;
    for(int i = 0; username[i] != '\0'; i++){
        letters.insert(username[i]);
    }
    int count = letters.size();

    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
