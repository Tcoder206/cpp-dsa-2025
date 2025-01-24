#include<bits/stdc++.h>
using namespace std;
string replaceSring(string s, char a, char b) {
    for(char &c : s) {
        if(c == a) c = b;
    }
    return s;
}
int main() {
    int t; cin >> t;
    while(t--) {
        string x, y; cin >> x >> y;
        string xMin = replaceSring(x, '6', '5');
        string yMin = replaceSring(y, '6', '5');
        int minSum = stoi(xMin) + stoi(yMin);
        string xMax = replaceSring(x, '5', '6');
        string yMax = replaceSring(y, '5', '6');
        int maxSum = stoi(xMax) + stoi(yMax);
        cout << minSum << " " << maxSum << endl;
    }
}