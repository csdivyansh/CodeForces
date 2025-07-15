#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int total_twos = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) total_twos++;
        }
        int left_twos = 0, ans = -1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 2) left_twos++;
            if (left_twos == total_twos - left_twos) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
