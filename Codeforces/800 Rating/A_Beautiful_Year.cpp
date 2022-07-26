#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(++n){
        string x = to_string(n);
        set <char> s;
        for(auto t : x) s.insert(t);
        if(x.length() == s.size()) break;
    }
    cout << n;
}