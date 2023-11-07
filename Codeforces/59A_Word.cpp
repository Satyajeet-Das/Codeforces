#include <bits/stdc++.h>
using namespace std;

int upper_count(string word);
int lower_count(string word);
void upper(string &word);
void lower(string &word);

int main(){
    string word;
    cin >> word;
    if(lower_count(word) >= upper_count(word)){
        lower(word);
    }else{
        upper(word);
    }

    cout << word << endl;

    return 0;
}

int upper_count(string word){
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'A' && word[i] <= 'Z') count++;
    }
    return count;
}

int lower_count(string word){
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a' && word[i] <= 'z') count++;
    }
    return count;
}

void upper(string &word){
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] -= 32;
        }
    }
}

void lower(string &word){
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] += 32;
        }
    }
}