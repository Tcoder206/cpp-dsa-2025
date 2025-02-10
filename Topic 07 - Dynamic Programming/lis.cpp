#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[1000]; cin >> n;
    vector<int> dp(n, 1);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}