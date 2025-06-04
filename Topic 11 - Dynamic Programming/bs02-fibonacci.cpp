#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> f;
int fib(int i) {
    if(i == 1 || i == 2) return f[i] = 1;
    if(f[i] != -1) return f[i];
    return f[i] = fib(i - 1) + fib(i - 2);
}
int main() {
    cin >> n;
    f = vector<int>(n + 1, -1);
    cout << fib(n) << endl;
    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }
    return 0;
}