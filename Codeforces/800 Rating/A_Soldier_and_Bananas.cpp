#include <bits/stdc++.h>
#define int long
using namespace std;

int32_t main(){
    int k, n, w;
    cin >> k >> n >> w;

    // tot = (1 + 2 + ... + w) * k
    int tot = ((w * (w + 1)) / 2) * k;
    int ans = max(tot - n, (int)0);
    cout << ans;
    return 0;
}