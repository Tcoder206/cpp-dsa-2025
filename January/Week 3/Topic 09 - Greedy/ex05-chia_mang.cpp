#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int arr[n];
        for(int &i : arr) cin >> i;
        sort(arr, arr + n);
        int sum1 = 0, sum2 = 0;
        int diff1 = abs(sum2 - sum1);
        for(int i = 0; i < n; i++) {
            if(i < k) {
                sum1 += arr[i];
            } else {
                sum2 += arr[i];
            }
        }
        sum1 = sum2 = 0;
        for(int i = 0; i < n; i++) {
            if(i < k) {
                sum2 += arr[i];
            } else {
                sum1 += arr[i];
            }
        }
        int diff2 = abs(sum1 - sum2);
        cout << max(diff1, diff2) << endl;
    }
    return 0;
}