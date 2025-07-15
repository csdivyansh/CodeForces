#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int minn = 1;
        int first = 0;
        for(int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            minn = min(minn, x);
            if(i == 0) {
                first = x;
            }
        }
        if(minn != first) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
