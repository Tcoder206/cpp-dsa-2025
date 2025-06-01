#include<bits/stdc++.h>
using namespace std;
int F[20][3][2][2];
string n;
int dp(int pos, int sum, int tight, int started, string &numb) {
    if(pos == numb.size()) {
        cout << pos << " " << sum << " " << tight << " " << started << " " << numb << endl;
        return (started && sum == 0);
    }
    if(F[pos][sum][tight][started] != -1) return F[pos][sum][tight][started];
    int cnt = 0, lim = tight ? (numb[pos] - '0') : 9;
    for(int i = 0; i <= lim; i++) {
        int ntight = tight && (i == lim);
        int nstart = started || (i != 0);
        int nsum = (sum + (nstart ? i * i : 0)) % 3;
        cnt += dp(pos + 1, nsum, ntight, nstart, numb);
    }
    return F[pos][sum][tight][started] = cnt;
}
int countN(string &numb) {
    memset(F, -1, sizeof(F));
    return dp(0, 0, 1, 0, numb);
}
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    cin >> n;
    cout << countN(n) << endl;;
    return 0;
}