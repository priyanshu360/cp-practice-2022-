#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(auto x : s) cnt += (x == '7' || x == '4');
    bool bad = !cnt;
    while(cnt){ bad |= (cnt % 10 != 4 && cnt % 10 != 7); cnt /= 10; }
    cout << (bad ? "NO" : "YES");
    return 0;
}