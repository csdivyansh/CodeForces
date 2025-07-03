#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b, ans;
        cin >> n >> a >> b;
        if(a * 2 > b) {
            if(n % 2 == 0) {
                ans = (n / 2) * b;
            } else {
                ans = n / 2 * b + a;
            }
        } else {
            ans = a * n;
        }
        cout << ans << endl;
    }
    return 0;
}
