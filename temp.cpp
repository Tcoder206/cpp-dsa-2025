#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    double n, m; cin >> n >> m;
    cout << "Phep cong: " << n << " + " << m << " = " << n + m << endl;
    cout << "Phep tru: " << n << " - " << m << " = " << n - m << endl;
    cout << "Phep nhan: " << n << " * " << m << " = " << n * m << endl;
    cout << "Phep chia: " << n << " / " << m << " = " << n / m << endl;
    return 0;
}
