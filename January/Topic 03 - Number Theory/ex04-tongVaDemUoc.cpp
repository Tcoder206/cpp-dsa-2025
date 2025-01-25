#include<bits/stdc++.h>
using namespace std;
int sumGcd(int n) {
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(i != n / i) {
                sum += n / i;
            }
            sum += i;
        }
    }
    return sum;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sum = sumGcd(n);
        cout << sum << endl;
    }
    return 0;
}