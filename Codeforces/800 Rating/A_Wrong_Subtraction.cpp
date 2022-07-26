#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    while(k){
        if(n%10){
            int t = min(k, n % 10);
            k -= t;
            n -= t;
        }else{
            k--;
            n /= 10;
        }
    }
    cout << n;
    return 0;
}