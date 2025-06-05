#include<bits/stdc++.h>
using namespace std;
#define f0(i, n) for(int i = 0; i < (n); i++)
struct Lich{
    int start, end;
};
int main() {
    #ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("TEST.INP", "r", stdin);
    freopen("TEST.OUT", "w", stdout);
    #endif
    int n, ans = 1; cin >> n;
    vector<Lich> a(n);
    f0(i, n) cin >> a[i].start >> a[i].end;
    sort(a.begin(), a.end(), [](const Lich &x, const Lich &y) {
        return x.end < y.end;
    });
    int end_time = a[0].end;
    f0(i, n) if(end_time < a[i].start) {
        ans++; end_time = a[i].end;
    }
    cout << ans << endl;
    return 0;
}