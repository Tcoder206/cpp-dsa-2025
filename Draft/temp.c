/*
3 200000
10000 20000 30000
*/
#include<stdio.h>
void sucCac(int unit[], int res[], int i, int n, int sum, int money) {
    for(int j = 0; j * unit[i] + sum <= money; j++) {
        res[i] = j;
        if(i == n && sum == money) {
            for(int l = 0; l < n; l++) printf("%d ", res[l]);
            printf("\n");
        } else if(i < n) {
            sucCac(unit, res, i + 1, n, j * unit[i] + sum, money);
        }
    }
}
int main() {
    int n, money;
    scanf("%d%d", &n, &money);
    int unit[n], res[n];
    for(int i = 0; i < n; i++) scanf("%d", &unit[i]);
    sucCac(unit, res, 0, n, 0, money);
    return 0;
}