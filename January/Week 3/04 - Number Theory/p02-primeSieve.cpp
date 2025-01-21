#include<bits/stdc++.h>
using namespace std;
int prime[1000000];
int main() {
    int n; cin >> n;
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(prime[i]) cout << i << " ";
    }
    return 0;
}