#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, curr = 0;
    while(n--){
        int x, y;
        cin >> x >> y;
        curr -= x;
        curr += y;
        ans = max(ans, curr);
    }
    cout << ans;
    return 0;
}