#include<bits/stdc++.h>
using namespace std;
int n = 30;
vector<int> f(n + 1, -1);
int fib(int n) {
    if (f[n] != -1) return f[n];
    if (n == 0) f[n] = 0;
    else if (n == 1) f[n] = 1;
    else f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}
int main() {
    fib(n);
    for (int i = 0; i <= n; i++) {
        cout << f[i] << " ";
    }
    return 0;
}
