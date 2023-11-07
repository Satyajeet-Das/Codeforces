#include <bits/stdc++.h>
using namespace std;

string abbreviation(string word);

int main(){
    int t;
    string word;
    cin >> t;
    while(t--){
        cin >> word;
        cout << abbreviation(word) << endl;
    }
    return 0;
}

string abbreviation(string word){
    int length = word.length();
    if(length > 10){
        string abbr = word[0] + to_string(length -2 ) + word[length-1];
        return abbr;
    }else{
        return word;
    }
}