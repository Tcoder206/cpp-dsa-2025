#include<bits/stdc++.h>
using namespace std;

int n = 30;
vector<int> f(n + 1, -1);

int fib(int n) {
    if (f[n] != -1) return f[n];  // Nếu đã tính giá trị rồi, trả về
    if (n == 0) f[n] = 0;         // f[0] = 0
    else if (n == 1) f[n] = 1;    // f[1] = 1
    else f[n] = fib(n - 1) + fib(n - 2);  // Tính giá trị Fibonacci cho n
    return f[n];
}

int main() {
    // Gọi fib(n) để tính tất cả các giá trị Fibonacci từ f[0] đến f[n]
    fib(n);
    
    // In tất cả các giá trị Fibonacci từ f[0] đến f[n]
    for (int i = 0; i <= n; i++) {
        cout << f[i] << " ";
    }
    
    return 0;
}
