#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    int ans = 0, take = 0;
    while(sum >= take){
        take += v.back();
        sum -= v.back();
        v.pop_back();
        ans++;
    }
    cout << ans;
    return 0;
}