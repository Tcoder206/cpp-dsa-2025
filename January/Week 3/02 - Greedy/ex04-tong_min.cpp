#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int &i : arr) cin >> i;
        sort(arr , arr + n);
        int oddN = 0, evenN = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                evenN = evenN * 10 + arr[i];
            } else {
                oddN = oddN * 10 + arr[i];
            }
        }
        int minSum = evenN + oddN;
        cout << minSum << endl;
    }
    return 0;
}