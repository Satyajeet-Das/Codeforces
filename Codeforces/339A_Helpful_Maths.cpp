#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v);

int main(){
    string equation;
    cin >> equation;

    vector<int> numbers;
    for(int i : equation){
        if(isdigit(i)){
            numbers.push_back((int)i);
        }  
    }

    bubble_sort(numbers);

    for(int i = 0; i < numbers.size();i++){
        if(i == numbers.size()-1) cout << (numbers[i]-48);
        else cout << (numbers[i]-48) << '+';
    }

    return 0;
}

void bubble_sort(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < (v.size() - i - 1); j++){
            if(v[j] >  v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}