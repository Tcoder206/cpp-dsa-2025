#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b)/gcd(a, b);
}
int main() {
    int a, b; cin >> a >> b;
    int res1 = gcd(a, b);
    int res2 = lcm(a, b);
    cout << res1 << " " << res2 << endl;
    return 0;
}